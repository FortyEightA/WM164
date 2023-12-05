#include <iostream>
#include <vector>
using namespace std;

template <typename C>
C compare(C first, C second){
  C ret = first > second ? first:second;
  return ret;
}

void bubblesort(int a[], int n){
  for (int i = 0; i < n - 1; i++) {
    // j < n - 1 - i because the last i elements are already sorted
    // after each iteration, the largest element is pushed to the end
    // so we don't need to compare it anymore
    for (int j = 0; j < n - 1 - i; j++) {
      if (a[j] > a[j + 1]) {
        // swap a[j] and a[j + 1]
        int temp = a[j]; a[j] = a[j + 1]; a[j + 1] = temp;
      }
    }
    // print the array after each iteration
    for (int k = 0; k < n; k++) cout << a[k] << " ";
    cout << endl;
  }
}

void selectionsort(int a[], int n){
  for (int i = 0; i < n - 1; i++) {
    int min = i;
    // test to find the smallest element in the unsorted part
    // of the array. Looping starts from i + 1 because a[i]
    // is the smallest element in the sorted part of the array
    for (int j = i + 1; j < n; j++) {
      if (a[j] < a[min]) min = j;
    }

    // swap a[i] and a[min] once i.e. no need to swap each time min is updated
    int temp = a[i]; a[i] = a[min]; a[min] = temp;
    // print the array after each pass
    for (int k = 0; k < n; k++) cout << a[k] << " ";
    cout << endl;
  }
}

int binarySearch(int arr[], int low, int high, int x) { 
    // Base case: If the search space becomes empty, the 
    // element is not present in the array 
    if (high >= low) { 
        // Calculate the middle index to divide the search 
        // space in half 
        int mid = low + (high - low) / 2; 
  
        // If the middle element is equal to 'x', we have 
        // found the element, return its index 
        if (arr[mid] == x) 
            return mid; 
  
        // If the middle element is greater than 'x', search 
        // in the left half of the array 
        if (arr[mid] > x) 
            return binarySearch(arr, low, mid - 1, x); 
  
        // If the middle element is less than 'x', search in 
        // the right half of the array 
        return binarySearch(arr, mid + 1, high, x); 
    } 
  
    // If the base case is reached, the element is not 
    // present in the array, return -1 
    return -1; 
} 

int main (int argc, char *argv[]) {
  vector<int> num = {1,2,3,4};
  for (const int& i : num) {
    cout << i << "";
  }
  cout << endl;
  for (int i = 0; i < num.size(); i++) {
    cout << num.at(i)<< "";
  }
  return 0;
}
// bubble sort
// for (int i = 0; i < n - 1; i++) {
//     for (int j = 0; j < n - 1 - i; j++) {
//         if (a[j] > a[j + 1]) {
//             // code to swap a[j] and a[j + 1]
//         }
//     }
// }
// selection sort
// for (int i = 0; i < n - 1; i++) {
//     int min = i;
//     for (int j = i + 1; j < n; j++) {
//         if (a[j] < a[min]) {
//             // code to swap a[j] and a[min]
//         }
//     }
// }
