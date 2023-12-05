#include <iostream>
using namespace std;

int main(){

  int bag, serving, calories_per_cookie;
  float ate, calories_ate;
  bag = 30;
  calories_per_cookie = 80;
  cout << "How many cookies did you eat ? ";
  cin >> ate;
  calories_ate = ate*calories_per_cookie;
  cout << "You ate " << calories_ate << " calories." << endl;
  return 0;
}
