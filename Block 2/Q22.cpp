#include <iostream>
#include <string>
using namespace std;

void display_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << ", ";
    }
}

void input_array(int *arr, int size)
{
    cout << "Please input the rainfall: ";
    for (int i = 0; i < size; i++)
    {
        cin >> *(arr + i);
    }
}
void average_rainfall(int *arr, int size)
{
    int average, sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    average = sum / size;
    cout << endl << "The average is: " << average << endl;
}
void maximum_rainfall(int *arr, int size){
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (max < *(arr + i))
        {
            max = *(arr + i); 
        }
    }
    cout << "The maximum rainfall is: " << max << endl;
}
void minimum_rainfall(int *arr, int size){
    int min = *arr;
    for (int i = 0; i < size; i++)
    {
        if (min > (*arr+i))
        {
            min = (*arr+i);
        }
    }
    cout << "The minimum rainfall is: " << min << endl;
}
int main(int argc, char const *argv[])
{
    int numDays;
    cout << "Please input the number of days: ";
    cin >> numDays;
    int *arr = new int[numDays];
    input_array(arr, numDays);
    display_array(arr, numDays);
    average_rainfall(arr, numDays);
    maximum_rainfall(arr, numDays);
    minimum_rainfall(arr, numDays);
    return 0;
}
