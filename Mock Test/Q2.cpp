#include <iostream>

using namespace std;

template <typename T, typename E>
bool IsSmaller(T a, E b){
  return(a>b);
}

int absolute(int val){
  return(val>0?val:-val);
}

int main (){
  int i, check = 0;
  string name; 
  cin >> name;
  cout << sizeof(name) << endl;
  switch (check) {
    case 0:
      cout << "Case 0" << endl;
      break;
    case 1:
      cout << "Case 1" << endl;
      break;
    default:
      cout << "Default" << endl;
      break;
  }

  if (check == 0) {
    cout << "Check = 0"<< endl;
  }

  for (int i = 1; i <= 4; i++) {
    cout << i << endl; 
    }

  cout << "It is " << IsSmaller<int, int>(1,2) << " that 1 is smaller than two." << endl;
  cout << absolute(-5)<< endl;
  return 0;

}
