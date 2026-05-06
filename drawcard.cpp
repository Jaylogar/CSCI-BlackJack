#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int drawcard(){ //This function will return a random number between 1 and 12.
  int card = 1 + rand() % 13;
  return card;
}