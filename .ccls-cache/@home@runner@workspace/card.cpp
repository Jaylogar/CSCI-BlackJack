#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int drawcard(){
  int card = 1 + rand() % 13;
  return card;
}

void card(){
srand(time(0));
char cmenu =  ' ';
int cardTotal = 1;
int faceDown = drawcard();

cout << "*****************\n";
cout << "Press H to Hit.\n";
cout << "*****************\n";
cout << endl;

cin >> cmenu;

while(cmenu != 'S' && cmenu != 's') {



  switch(cmenu){
    case 'H': case 'h':
      cout << "You drew a " << drawcard() << endl;
      cardTotal += drawcard();
      if(cardTotal >= 21){
        cout << "It's a Bust and you didnt even give the Face Down card a chance!" << endl;
        break;
      }
      cout << "Your hand: **** + " << cardTotal << endl;
      cout << endl;
      cout << "*****************\n";
      cout << "Press H to Hit.\n";
      cout << "Press S to Stand.\n";
      cout << "*****************\n";

      cin >> cmenu;
      break;
    default:
      cout << "Invalid input. Please try an actual input!" << endl;
      break;
  }

  cout << "You chose to stand. " << endl;
  cout << "Your hand: " << faceDown << " + " << cardTotal << endl;

  if(cardTotal + faceDown > 21){
    cout << "It's a Bust!" << endl;
  } 
  else {
    cout << "Your final hand is: " << cardTotal + faceDown << endl;
  }
}
cout << "You chose to stand. " << endl;
cout << "Your hand: " << faceDown << " + " << cardTotal << endl;

if(cardTotal + faceDown > 21){
  cout << "It's a Bust!" << endl;
} 
else {
  cout << "Your final hand is: " << cardTotal + faceDown << endl;
}
}