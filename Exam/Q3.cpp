#include <iostream>

using namespace std;

int findMaxValue(int arr[], int size){
  int max = 0;
  for (int i = 0; i < size-1; i++) {
    max = (arr[i]>arr[max])?i:max;
  }
  return arr[max];
}

int findMaxValueID(int arr[], int size){
  int max = 0;
  for (int i = 0; i < size-1; i++) {
    max = (arr[i]>arr[max])?i:max;
  }
  return max+1;
}

int main (int argc, char *argv[]) {
  int data[10], ids[10];
  for (int i = 0; i < 10; i++) ids[i] = i+1;
  cout << "Enter 10 integer values: " << endl;
  for (int i = 0; i < 10; i++) cin >> data[i];
  cout << endl;
  cout << "The maximum value in the data array is: " << findMaxValue(data,10) << endl;
  cout << "Identification number (ID) of the maximum value is: " << findMaxValueID(data,10) << endl;
  
  return 0; 
}
