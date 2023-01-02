#include <iostream>

using namespace std;

int main() {
  double sales = 95000,
         stateTax = sales / 25,
         countyTax = sales / 50;

  cout << "Sales, State Tax, County Tax = " << sales << ", " << stateTax << ", " << countyTax;

  return 0;
}