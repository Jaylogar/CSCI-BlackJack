#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;


int card(){ // runs a game of blackjack and returns the final hand value of the player. Returns 0 if the player busts.
  srand(time(0));
  char cmenu =  ' ';
  int cardTotal = 0;
  int faceDown = 1 + rand() % 10; // this will generate a random number between 1 and 11 for the face down card.
  
  cout << "*****************\n";
  cout << "Press H to Hit.\n";
  cout << "*****************\n";
  cout << endl;
  
  cin >> cmenu;
  
  while(cmenu != 'S' && cmenu != 's') { // this will keep the loop running until the player chooses s or S to stand.
  
    int draw = 1 + rand() % 10; // this will generate a random number between 1 and 11 for the card drawn.
    switch(cmenu){ 
      case 'H': case 'h':
        cout << "You drew a " << draw << endl;
        cardTotal += draw; // adds the drawn card to the total card value.
        if(cardTotal >= 21){ // this will check if the player pulled enough cards to automatically bust. 
          cout << "It's a Bust and you didnt even give the Face Down card a chance!" << endl;
          break;
        }
        break;
      default:
        cout << "Invalid input. Please try an actual input!" << endl;
        break;
    }
    cout << "Your hand: **** + " << cardTotal << endl;
    cout << endl;
    cout << "*****************\n";
    cout << "Press H to Hit.\n";
    cout << "Press S to Stand.\n";
    cout << "*****************\n";
    cin >> cmenu;
    cout << endl;
    
  }
  cout << "You chose to stand. " << endl;
  cout << "Your hand: " << faceDown << " + " << cardTotal << endl;
  
  if(cardTotal + faceDown > 21){  // checks if the player busts after adding the face down card. 
    cout << "It's a Bust!" << endl;
    cout << endl;
    return 0;
  } 
  else {
    cout << "Your final hand is: " << cardTotal + faceDown << endl;
    cout << endl;
  }
  return cardTotal + faceDown; // returns the final hand value of the player. 
}