#include <iostream>
#include <string>
using namespace std;

class player
{
public:
    string name;
    int average;
};

void displayReport(player arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i].name << ", ";
    }
}

void bubbleSort(player arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int k = 0; k < size - 1 - i; k++)
        {
            if (arr[k].average > arr[k + 1].average)
            {
                player temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
}

void inputNames(player arr[], int size)
{
    cout << "Please Input the Player Name followed by a space and their average" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i].name >> arr[i].average;
    }
}
int main(int argc, char const *argv[])
{
    player p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12;
    player arr[] = {p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12};
    int size = sizeof(arr) / sizeof(arr[0]);
    inputNames(arr, size);
    bubbleSort(arr, size);
    displayReport(arr, size);
    return 0;
}
