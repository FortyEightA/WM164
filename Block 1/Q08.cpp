#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  
  float calories, fat, fatCalories;
  cout << "Please Input the Calories: ";
  cin >> calories;
  cout << "Please Input the Fat: ";
  cin >> fat;
  float percentage;
  fatCalories = fat * 9; 
  if (fatCalories > calories) {
    cout << "error, too much fat" << endl;
  }
  percentage = (fatCalories/calories)*100;
  if (percentage <= 30) {
    cout << "This is low in fat" << endl;
  }
  cout << "The percentage of fat is " << percentage << "%" << endl;
  return 0;

}
