#include <iostream>

using namespace std;

float profitreturn(float NS, float SP, float SC, float PP, float PC){          
  float profit = ((NS*SP)-SC)-((NS*PP)+PC);
  return profit;
}

int main (int argc, char *argv[]) {
  float NS, SP, SC, PP, PC, profit;
  cout<<"Please Input The number of shares: ";
  cin >> NS;
  cout<<"Please Input The commissions paid: ";
  cin >> SC;
  cout<<"Please Input The sale price per share: ";
  cin >> SP;
  cout<<"Please Input The purchase price per share: ";
  cin >> PP;
  cout<<"Please Input The purchase commission paid: ";
  cin >> PC;
  profit = profitreturn(NS,SP,SC,PP,PC);
  cout << "The profit is: " << profit << endl;
  return 0;
}
