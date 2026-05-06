#ifndef DEALERSCORING_H // check if "DEALERSCORING_H has not been defined yet in order to prevent for the header to be printed multiple times.
#define DEALERSCORING_H  
//it defines dealerscoring_H

//void means that the function does not return a value 
void determineWinner( // it will tell the program that "determineWinner" exists, a prototype/declaration.
int player1Total,
int player2Total,
int &player1Score,
int &player2Score
);

#endif // it basically ends ifndef, to work as a header protection so it cannot be duplicated multiple times.
