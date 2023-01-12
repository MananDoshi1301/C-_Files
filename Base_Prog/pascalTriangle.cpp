#include <bits/stdc++.h>
#include <iostream>
// #include <chrono>

using namespace std;
// using namespace std::chrono;

double fact(double n) {

  if (n == 0)
    return 1;

  double num = 1;
  for (double i = n; i > 1; i--) {
    num *= i;
  }
  return num;
}

double math_combination(double n, double r) {
  double comb = fact(n) / (fact(r) * fact(n - r));
  return comb;
}

int main() {

  double n;
  cout << "Enter the height of triangle: ";
  cin >> n;

  for (int row = 0; row < n; row++) {
    // Centred Triangle
    // for (int space = n - 1 - row; space > 0; space--){
    //   cout << " ";
    // } 
    for (int col = 0; col <= row; col++) {
      cout << math_combination(row, col) << " ";
    }
    cout << endl;
  }

  return 0;
}