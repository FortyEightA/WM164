#include <iostream>

using namespace std;

float calcMPG(int distance, float gallonsUsed){
  float MPG;
  MPG = distance/gallonsUsed;
  return MPG;
}


int main (int argc, char *argv[]) {
  string carName1, carName2, carName3;
  float gallons1, gallons2, gallons3, MPG1, MPG2, MPG3;          

  cout << "Please Input the Model of the first Car: ";
  cin >> carName1;
  cout << "Please Input the amount of fuel used in gallons: "; 
  cin >> gallons1;
  MPG1= calcMPG(500, gallons1);

  cout << "Please Input the Model of the second Car: ";
  cin >> carName2;
  cout << "Please Input the amount of fuel used in gallons: "; 
  cin >> gallons2;
  MPG2= calcMPG(500, gallons2);

  cout << "Please Input the Model of the third Car: ";
  cin >> carName3;
  cout << "Please Input the amount of fuel used in gallons: "; 
  cin >> gallons3;
  MPG3= calcMPG(500, gallons3);


  if (MPG1>MPG2) {
    if (MPG1>MPG3) {
      cout << "The most efficient car is: "  << carName1 <<", with a MPG of: " << MPG1 << endl;
    } 
    else {
      cout << "The most efficient car is: "  << carName3 <<", with a MPG of: " << MPG3 << endl;
    }
  }
  else if (MPG2 > MPG3) {
   
    cout << "The most efficient car is: "  << carName2 <<", with a MPG of: " << MPG2 << endl;
  }
  else {
    cout << "The most efficient car is: "  << carName3 <<", with a MPG of: " << MPG3 << endl;
  }
  return 0;
}
