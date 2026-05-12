#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int drawcard(){
  int card = 1 + rand() % 13;
  return card;
}