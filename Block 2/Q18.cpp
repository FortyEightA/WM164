#include <iostream>
#include <string>
using namespace std;

void inputData(int zoo[][3], int sizeofrows,int sizeofcolumns){
    for (int i = 0; i < sizeofrows; i++)
    {
        for (int j = 0; j < sizeofcolumns; j++)
        {
            cin >> zoo[i][j];
        }
    }
}
void averagePerDay(int zoo[][3], int sizeofrows, int sizeofcolumns){
    for (int i = 0; i < sizeofrows; i++)
    {
        double average = 0.000;
        double sum = 0.000;
        for (int k = 0; k < sizeofcolumns; k++)
        {
            sum+=zoo[i][k];
        } 
        average=sum/3.000;
        cout << "The average for Day " << i + 1 << " is " << average << endl;
    }
}
void leastFoodInWeek(int zoo[][3], int sizeofrows, int sizeofcolumns){
    int least = zoo[0][0];
    for (int i = 0; i < sizeofrows; i++)
    {
       for (int k = 0; k < sizeofcolumns; k++)
       {
            if (zoo[i][k]<least)
            {
               least=zoo[i][k]; 
            }
       }
    }
    cout << "The least amount of food eaten this week is: "<<least<<endl;
}
void mostFoodInweek(int zoo[][3], int sizeofrows, int sizeofcolumns){
    int most= zoo[0][0];
    for (int i = 0; i < sizeofrows; i++)
    {
       for (int k = 0; k < sizeofcolumns; k++)
       {
            if (zoo[i][k]>most)
            {
               most=zoo[i][k]; 
            }
       }
    }
    cout <<"The most amount of food eaten this week is: "<<most<<endl;
}
int main(int argc, char const *argv[])
{
    int zoo[7][3];
    int rows = sizeof(zoo) / sizeof(zoo[0]);
    int cols = sizeof(zoo[0]) / sizeof(zoo[0][0]);
    inputData(zoo, rows, cols);
    averagePerDay(zoo, rows, cols);
    leastFoodInWeek(zoo, rows, cols);
    mostFoodInweek(zoo, rows, cols);
    return 0;
}
