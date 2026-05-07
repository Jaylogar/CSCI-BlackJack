#include <iostream>
#include <cstdlib> 
#include <ctime>
#include "card.h"
#include "dealerscoring.h"
using namespace std;

void gameplay(){
  int player1Score = 0;
  int player2Score = 0;

  while(player1Score < 3 && player2Score < 3){
    cout << "Player 1's turn: \n";
    cout << endl;
    int p1 = card();  //Player 1 plays the round everytime the loop runs; Add text that seperates each player and round
    cout << "Player 2's turn: \n";
    cout << endl;
    int p2 = card();  //Player 2 plays the round everytime the loop runs

    int winner = determineWinner(p1, p2);

    if(winner == 0){
      //scoreboard results
      cout << "CSCI 271 BlackJack Scoreboard\n";
      cout << "Player 1 Score: " << player1Score << endl;    // shows player 1 score
      cout << "Player 2 Score: " << player2Score << endl;     // shows player 2 score
      cout << endl;
      continue; // this will skip the rest of the code and start the loop again  
    }
    else if(winner == 2){
      player2Score++; // this will add 1 to player 2 score
    }
    else{
      player1Score++;
    }
    //scoreboard results
    cout << "******************************\n";
    cout << "CSCI 271 BlackJack Scoreboard\n";
    cout << "******************************\n";
    cout << "Player 1 Score: " << player1Score << endl;    // shows player 1 score
    cout << "Player 2 Score: " << player2Score << endl;     // shows player 2 score
    cout << endl;
  
  }

  if(player2Score > player1Score){
    cout << "Player 2 has won the game!" << endl;
  }
  else{
    cout << "Player 1 has won the game!" << endl;
  }
}