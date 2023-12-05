#include <iostream>
#include <string>
using namespace std;

bool leap_year(int year){
    if ((year % 100) == 0)
    {
        if ((year % 400) == 0)
        {
            return true;
        }
    }
    else if ((year % 4) == 0)
    {
       return true; 
    }
    return false;
}
void bubble_sort(int arr[], int size){
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < (size-1); j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp; 
            }
        }
    }
}
void selection_sort(int arr[], int size){
    int temp;
    for (int i = 0; i < size; i++)
    {
        int min = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp; 
    }
}
int main(int argc, char const *argv[])
{
    int months[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month, year;
    cout << "Please input the month followed by the year: ";
    cin >> month >> year;
    if (month == 2)
    {
        bool leapYearCheck = leap_year(year);
        if (leapYearCheck == true){
            cout << "29 Days" << endl;
        }
    }
    else
    {
        cout << months[month-1] << " Days" << endl;
    }
    return 0;
}