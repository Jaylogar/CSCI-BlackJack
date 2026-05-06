#include <iostream>
#include <cstdlib> 
#include <ctime>
#include "card.h"
#include "drawcard.h"
using namespace std;

int main(){
  int p1 = 0;
  int p2 = 0;
  
  p1 = card();
  p2 = card();
  if(p1 > p2){  //This is an example of how to compare the two players hands. You'll need to add more logic to determine if the players hands are equal or if p2 wins. You can also make it as cool as you want or change the example code.
    cout << "Player 1 wins!" << endl;
  }
}