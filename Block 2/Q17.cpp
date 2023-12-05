#include <iostream>
#include <string>
using namespace std;

void getData(double months[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cin >> months[i];
  }
}
double totalRainfall(double months[], int size)
{
  double sum;
  for (int i = 0; i < size; i++)
  {
    sum += months[i];
  }
  return sum;
}
double averageRainfall(double months[], int size)
{
  double total = totalRainfall(months, size);
  double average = total / size;
  return average;
}
int driestMonth(double months[], int size)
{
  int min = 0;
  double temp = months[min];
  for (int i = 0; i < size; i++)
  {
    if (months[i] > temp)
    {
      min = i;
      temp = months[i];
    }
  }
  return min;
}
int wettestMonth(double months[], int size)
{
  int max = 0;
  double temp = months[max];
  for (int i = 0; i < size; i++)
  {
    if (months[i] < temp)
    {
      max = i;
      temp = months[i];
    }
  }
  return max;
}
string indexToMonth(int index)
{
  string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  return months[index];
}
void displayReport(double months[], int size)
{
  cout << "Report for past 12 months: " << endl;
  cout << "The total rainfall: " << totalRainfall(months, size) << endl;
  cout << "The average rainfall: " << averageRainfall(months, size) << endl;
  cout << "The most amount of rainfall was in " << indexToMonth(driestMonth(months, size)) << endl;
  cout << "The least amount of rainfall was in " << indexToMonth(wettestMonth(months, size)) << endl;
}
int main(int argc, char *argv[])
{
  double months[12];
  int size = sizeof(months) / sizeof(months[0]);
  getData(months, size);
  displayReport(months, size);
  return 0;
}
