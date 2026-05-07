#include <iostream>
#include <cstdlib> 
#include <ctime>
#include "card.h"
#include "drawcard.h"
#include "dealerscoring.h"
using namespace std;

int main(){
  int p1 = 0;
  int p2 = 0;
  
  
  while(p1s < 3 && p2s < 3){
    p1 = card();  //Player 1 plays the round everytime the loop runs; Add text that seperates each player and round
    p2 = card();  //Player 2 plays teh round everytime the loop runs

    int winner = determineWinner(p1, p2);
    
    if(winner == 0){
      //scoreboard results
      cout << "CSCI 271 BlackJack Scoreboard\n";
      cout << "Player 1 Score: " << player1Score << endl;    // shows player 1 score
      cout << "Player 2 Score: " << player2Score << endl;     // shows player 2 score
      continue; // this will skip the rest of the code and start the loop again  
    }
    else if(winner == 1) 
    //scoreboard results
    cout << "CSCI 271 BlackJack Scoreboard\n";
    cout << "Player 1 Score: " << player1Score << endl;    // shows player 1 score
    cout << "Player 2 Score: " << player2Score << endl;     // shows player 2 score
    }

    
  }
}