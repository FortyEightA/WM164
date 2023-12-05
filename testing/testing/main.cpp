// Consider a company that needs to sort an array Person data[10] of structures of type Person by name.

//     struct Person
// {
//     string name;
//     int age;
// } In real life the Person structures may have many members and occupy a large area of memory, making it computationally expensive to move Person objects around while sorting.
// You can define an auxiliary array Person *pData[10], setting each entry of pData[k] to point to the corresponding entry of data[k].Write a program that sorts the array of
// pointers so that when you go through pData in increasing order of index k, the entries pData[k] point to Person objects in ascending alphabetic order of names.
#include <iostream>
#include <string>
using namespace std;

struct Person
{
    string name;
    int age;
};

Person getData(){
    Person temp;
    cout << "Please enter the name followed by enter and the age: ";
    cin >> temp.name;
    cin >> temp.age; 
    cout << endl;
    return temp;
}

void populateData(Person arr[], int size){
    for (int i = 0; i < size; i++)
    {
        arr[i] = getData();
    }
}

void populatePointerData(Person *parr[], int size, Person arr[]){
    for (size_t i = 0; i < size; i++)
    {
        parr[i] = &arr[i];
    }
}

int partition(Person *parr[], int start, int end)
{
    int index = 0, pivotIndex, newsize;
    Person *pivotElement = parr[end];
    newsize = end - start + 1;
    Person *temp[newsize];
    for (int i = start; i <= end; i++)
    {
        if (parr[i]->name < pivotElement->name)
        {
            temp[index] = parr[i];
            index++;
        }
    }
    temp[index] = pivotElement;
    index++;

    for (int i = start; i < end; i++)
    {
        if (parr[i]->name > pivotElement->name)
        {
            temp[index] = parr[i];
            index++;
        }
    }
    index = 0;
    for (int i = start; i <= end; i++)
    {
        if (parr[i]->name == pivotElement->name)
        {
            
            
            pivotIndex = i;
        }
        parr[i] = temp[index];
        index++;
    }
    return pivotIndex;
}

void quickSort(Person *arr[], int start, int end)
{
    if (start < end)
    {
        int partitionIndex = partition(arr, start, end);
        quickSort(arr, start, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, end);
    }
    return;
}

int main(int argc, char const *argv[])
{
    Person data[10];
    int size = sizeof(data)/sizeof(data[0]);
    populateData(data, size);
    Person *pData[size];
    populatePointerData(pData, size, data);
    quickSort(pData, 0, size-1);

    return 0;
}

