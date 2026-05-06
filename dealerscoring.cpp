#include <iostream>
#include "dealerscoring.h"

using namespace std;

// To findout the round winner
void determineWinner{ /
  int player1Total,
  int player2Total,
  int &player1Score,
  int &player2score
) {
// this will be used to show the round results
  cout << "*******************\n";
  cout << " Round Results\n";
  cout << "********************\n";
//To show Player 1 results
  cout << "Player 1 Results: "
    << player1Total << endl;
// to show player 2 results
cout << "Player 2 Results: "
  << player2Total << endl;

if ((player1Total == 0 && player2Total == 0)
  || (player1 == player2Total)) {
cout << "Tie Round \n";
}
else if ( // This if for when the player 2 wins a round
  player1Total == 0
  || (player2Total > player1Total && player2Total <= 21)
  ) {
  cout << "Player 2 HAS WON THE ROUND \n";
player2Score++;
}
else { // this is for when player 1 gets to win a round
  cout << "Player 1 HAS WON THE ROUND \n";
player1Score++;
}
//scoreboard results
cout << " CSCI 271 BlackJack Scoreboard"\n"
  cout << "Player 1 Score: "
    << player1score << endl;
  cout << "Player 2 Score: "
    << player2score << endl;
}


  

