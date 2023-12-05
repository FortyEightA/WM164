#include <iostream>
#include <string>
#include <vector>
using namespace std;

void linear_search(int arr[], int size, int searchValue){
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count += 1;
        if (arr[i]==searchValue)
        {
            cout << "The program has compared " << count << " many times."<<endl;
            cout << "The item is at index "<< i << endl;
            return;
        }
    }
}
void binary_search(int arr[], int size, int searchValue, int count, int low, int high, int mid){
    count += 1;
    if (arr[mid]==searchValue)
    {
        cout<<"The item has been found at index " << mid << endl;
        cout<<"The program has compared " << count << " many times."<<endl;
        return;
    }
    else
    {
        if (arr[mid]<searchValue)
        {
            low = mid;
            mid = (low+high)/2;
            binary_search(arr, size, searchValue, count, low, high, mid); 
        }
        else
        {
            high = mid;
            mid = (low+high)/2;
            binary_search(arr, size, searchValue, count, low, high, mid);
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int size = sizeof(arr)/sizeof(arr[0]);
    int searchValue = 17;
    linear_search(arr, size, searchValue);
    int count = 0, low = 0, high = size-1, mid = (low+high)/2;
    binary_search(arr, size, searchValue, count, low, high, mid);
    return 0;
}
