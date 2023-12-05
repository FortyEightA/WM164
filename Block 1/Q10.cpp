#include <iostream>
using namespace std;

int futurePrice(float initial){
  float first, second, third;
  first = 0.8;
  second = 0.85;
  third = 0.9;
  float future;
  future = initial * first;
  future = future * second;
  for (int i = 0; i < 8 ; i++) {
    future = future * third; 
  }
  cout << "price will be " << future << " in 10 years!";
  return 0;
}

int main (int argc, char *argv[]) {
  float cost;
  cin >> cost;
  futurePrice(cost);
  return 0;
}
