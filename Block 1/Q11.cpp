#include <iostream>
#include <math.h>


using namespace std;


int main (int argc, char *argv[]) {
  int userIncomeInput, store1Input, store2Input, store3Input;  
  cout << "Please Input todays sales for Shop 1, rounded to the nearest 100$: ";
  cin >> store1Input;
  cout << "Please Input todays sales for Shop 2, rounded to the nearest 100$: ";
  cin >> store2Input;
  cout << "Please Input todays sales for Shop 3, rounded to the nearest 100$: ";
  cin >> store3Input;
  
  int starNumber1, starNumber2, starNumber3;
  
  starNumber1 = store1Input/100;
  starNumber2 = store2Input/100;
  starNumber3 = store3Input/100;

  string star("*");
  string sales1("The sales for shop 1 is : ");
  for (int i = 0; i < starNumber1; i++) {
    sales1 += star; 
  }
  cout<< sales1 << endl; 
  string sales2("The sales for shop 2 is : ");
  for (int i = 0; i < starNumber2; i++) {
    sales2 += star; 
  }
  cout<< sales2 << endl;
  string sales3("The sales for shop 3 is : ");
  for (int i = 0; i < starNumber3; i++) {
    sales3 += star; 
  }
  cout << sales3 << endl;





  return 0;

}
