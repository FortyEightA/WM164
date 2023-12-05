#include <iostream>

using namespace std;

float C2F(float celsius){
  float farrenheit = ((celsius*9)/5.0)+32;
  return farrenheit;
}

int main (int argc, char *argv[]) {
  float celsius;
  cout << "Please Input the Number in Celsius: ";
  cin >> celsius;
  celsius = C2F(celsius);
  cout << celsius;
  return 0;
}
