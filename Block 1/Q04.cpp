#include <iostream>
using namespace std;

int main(){
  float first_exam_percentage, second_exam_percentage, third_exam_percentage, average;
  cout << "What percentage did you achieve in the first examination ?: ";
  cin >> first_exam_percentage;
  cout << "What percentage did you achieve in the second examination ?: ";
  cin >> second_exam_percentage;
  cout << "What percentage did you achieve in the third examination ?: ";
  cin >> third_exam_percentage;
  average = (first_exam_percentage + second_exam_percentage + third_exam_percentage)/3;
  cout << "average is " << average << "%" << endl;
  return 0;
}
