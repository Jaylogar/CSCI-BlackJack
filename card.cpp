#include <iostream>
#include <cstdlib> 
#include <ctime>
#include "drawcard.h"
using namespace std;


int card(){ // runs a game of blackjack and returns the final hand value of the player. Returns 0 if the player busts.
  srand(time(0));
  char cmenu =  ' ';
  int cardTotal = 0;
  int faceDown = drawcard();
  
  cout << "*****************\n";
  cout << "Press H to Hit.\n";
  cout << "*****************\n";
  cout << endl;
  
  cin >> cmenu;
  
  while(cmenu != 'S' && cmenu != 's') {
  
    int draw = drawcard();
    switch(cmenu){
      case 'H': case 'h':
        cout << "You drew a " << draw << endl;
        cardTotal += draw;
        if(cardTotal >= 21){
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
    
  }
  cout << "You chose to stand. " << endl;
  cout << "Your hand: " << faceDown << " + " << cardTotal << endl;
  
  if(cardTotal + faceDown > 21){
    cout << "It's a Bust!" << endl;
    return 0;
  } 
  else {
    cout << "Your final hand is: " << cardTotal + faceDown << endl;
  }
  return cardTotal + faceDown;
}