#include <iostream>

using namespace std;

int main (){
  int minuteLimit, hourLimit, dayLimit, userInput, dayCount, hourCount, minuteCount;
  minuteLimit = 60;
  hourLimit = 3600;
  dayLimit = 86400;
  dayCount = 0;
  hourCount = 0;
  minuteCount = 0;
  cout << "Input the amount of seconds: ";
  cin >> userInput;
  while (userInput >= minuteLimit) {
    if (userInput >= dayLimit) {
      userInput -= dayLimit;
      dayCount += 1;
    }
    else if (userInput >= hourLimit) {
      userInput -= hourLimit;
      hourCount += 1;
    }
    else {
      userInput -= minuteLimit;
      minuteCount += 1;
    }
  }
  cout << "The amount of time is: " << dayCount << "days, " << hourCount
    << "hours, " << minuteCount << "minutes, " << userInput << "seconds" << endl;
  return 0;
}
