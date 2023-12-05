#include <iostream>
#include <string>
using namespace std;

void bubble_sort(string arr[], int size);

void selection_sort(string arr[], int size);

void display_array(string arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    string arr1[] = {"jsakfn", "nejanea", "sknaenajk", "skaenk", "iwneuanjk", "iwnnakjn", "pokqm", "klsnebjr", "dnjwwwwka", "snsejrkl"};
    int size1, size2;
    size1 = sizeof(arr1) / sizeof(arr1[0]);
    size2 = size1;
    string arr2[] = {"jsakfn", "nejanea", "sknaenajk", "skaenk", "iwneuanjk", "iwnnakjn", "pokqm", "klsnebjr", "dnjwwwwka", "snsejrkl"};
    bubble_sort(arr1, size1);
    cout << endl;
    selection_sort(arr2, size2);
    return 0;
}

void bubble_sort(string arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int k = 0; k < size - 1 - i; k++)
        {
            int temp_cmp = arr[k].compare(arr[k + 1]);
            if (arr[k] < arr[k + 1])
            {
                string temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
        display_array(arr, size);
    }
}

void selection_sort(string arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] > arr[min])
                min = j;
        }

        string temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        display_array(arr, size);
    }
}