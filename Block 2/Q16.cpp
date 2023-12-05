#include <iostream>
#include <string>
using namespace std;

int largest(int arr[], int sizearr){
  int max = 0;
  int temp = arr[max];
  for (int i = 0; i < sizearr; i++) {
    if (arr[i] > temp) {
      max = i;
      temp = arr[max];
    } 
  }
  return max;
}
int smallest(int arr[], int sizearr){
  int min = 0;
  int temp = arr[min];
  for (int k = 0; k < sizearr; k++){
    if (arr[k]<temp){
      min = k;
      temp =arr[min];
    }
  }
  return min;
}
int main (int argc, char *argv[]) {
  string salsa[]={"mild","medium","sweet","hot","zesty"};
  int sales[5];
  cout << "Please input the sales for the past month: ";
  for (int i = 0; i < 5; i++) cin >> sales[i];
  int sum = 0;
  for (int x = 0; x < 5; x++) {
    sum = sum + sales[x];
    cout << "You have sold "  << sales[x] << " jars of " << salsa[x] << " sauce."<< endl;
  }
  cout << "The total number of sales is: " << sum << endl;
  int size = sizeof(sales) / sizeof(sales[0]);
  int indexOfLargest = largest(sales, size);
  cout << "The most selling salsa type is " << salsa[indexOfLargest]<< endl;
  int indexOfSmallest = smallest(sales, size);
  cout << "The least selling salsa type is " << salsa[indexOfSmallest]<< endl;
  return 0;
}
