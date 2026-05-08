#include <iostream>
#include <cstdlib> 
#include <ctime>
#include "card.h"
<<<<<<< HEAD
#include "drawcard.h"
#include "dealerscoring.h"
using namespace std;

int main(){
  int player1Score = 0;
  int player2Score = 0;

  // ===============================
  // NEW MENU CODE STARTS HERE
  // ===============================

  char menu_choice = ' ';

  while(menu_choice != 'Q' && menu_choice != 'q') {
    cout << "\n=====================\n";
    cout << "      BLACKJACK\n";
    cout << "=====================\n";
    cout << "P - play\n";
    cout << "A - about\n";
    cout << "R - rules\n";
    cout << "Q - quit\n";
    cout << "\nwhat will your choice be: ";
    cin >> menu_choice;

    switch(menu_choice) {
      case 'P':
      case 'p':

        // when the player wants to play

        cout << "\nWelcome to Blackjack! First to 5 wins!\n";

        while(player1Score < 5 && player2Score < 5) {
          cout << "\n=== Player 1's Turn ===\n";
          int p1 = card();

          cout << "\n=== Player 2's Turn ===\n";
          int p2 = card();

          determineWinner(p1, p2, player1Score, player2Score);

          if(player1Score >= 5) {
            cout << "\n*** Player 1 wins the game! ***\n";
          } else if(player2Score >= 5) {
            cout << "\n*** Player 2 wins the game! ***\n";
          }
        }

        // for when the player wants to know what it the game is about

        break;

      case 'A':
      case 'a':
        cout << "\nABOUT:\n";
        cout << "this is a blackjack game done in C++, by jean, ethan, and jack\n";
        break;

      case 'R':
      case 'r':
        cout << "\nGAME RULES:\n";
        cout << "player 1 and player 2 take turns playing blackjack.\n";
        cout << "the player closer to 21 without busting wins the round.\n";
        cout << "first player to 5 points wins the game.\n";
        break;

      case 'Q':
      case 'q':
        cout << "\nthanks for playing!\n";
        break;

      default:
        cout << "\ninvalid choice. try again.\n";
        break;
    }
  }
  return 0;
}
