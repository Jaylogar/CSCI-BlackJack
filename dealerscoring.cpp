#include <iostream>
#include "dealerscoring.h"

using namespace std;

// To findout the round winner
void determineWinner( 
// this is to send both of the totals scores to the scoring system. Also it updates the score, showing the newest scores.
//Overall it determines who's the winner of the round.
  int player1Total,   //stores player 1 and player 2 total score
  int player2Total,  
  int &player1Score,  // this is to store and also update the players 1 and 2 scores.
  int &player2Score
) {
// this will be used to show the round results
  cout << "*******************\n";  
  cout << " Round Results\n";
  cout << "********************\n";
  
//To show Player 1 results:
  cout << "Player 1 Results: "
    << player1Total << endl; 
// to show player 2 results:
cout << "Player 2 Results: "
  << player2Total << endl;
  
// this will check if the rounds are tie. it happens when both player bust or even when both players scores are equal.
if ((player1Total == 0 && player2Total == 0)
  || (player1Total == player2Total)) { // checks if both players have the same score, || means Or so its like "both players bust or the both players have the same score.
cout << "Tie Round \n";
}
else if ( // This if for when the player 2 wins a round
  player1Total == 0 // its to check if player 1 bust because bust returns to 0, then it will show that player 2 automatically won.
  || (player2Total > player1Total && player2Total <= 21) // this would check if player 2 has a higher score than player 1 and also check if player 2 did not bust.
  ) { // closes the condition(also it finished the If statement) and then starts a new block of code to see if the condition is  true and not false.
  cout << "Player 2 HAS WON THE ROUND \n";
player2Score++; // this would add a point(+1) to the player2 score
}
else { // this is for when player 1 gets to win a round, if the previous condiitions aren't true then the player 1 will win the round.
  cout << "Player 1 HAS WON THE ROUND \n";
player1Score++; // this would add a point(+1) to the player1 score
}
//scoreboard results
cout << " CSCI 271 BlackJack Scoreboard"\n";
  cout << "Player 1 Score: "
    << player1Score << endl; // shows player 1 score
  cout << "Player 2 Score: "
    << player2Score << endl; // shows player 2 score
}


  

