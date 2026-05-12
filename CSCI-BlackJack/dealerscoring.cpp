#include <iostream>

using namespace std;

// To findout the round winner
int determineWinner(int player1Total, int player2Total){   //stores player 1 and player 2 total score
//Overall it determines who's the winner of the round.{
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
if (player1Total == player2Total) { // checks if both players scores are equal, if its true then the round will be a draw round.
  cout << "Draw Round \n";
  return 0;
}
else if (player2Total > player1Total){ // this would check if player 2 has a higher score than player 1 
  cout << "Player 2 HAS WON THE ROUND \n" << endl;
  return 2;
}
else { // this is for when player 1 gets to win a round, if the previous condiitions aren't true then the player 1 will win the round.
  cout << "Player 1 HAS WON THE ROUND \n"<< endl;
  return 1; 
}
}
