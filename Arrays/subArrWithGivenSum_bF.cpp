#include <iostream>

using namespace std;

void subArrWithGivenSum_bF(int arr[], int n, int s) {

  int endPtr, currentSum;
  int iCtr = 0, whileCtr = 0;
  bool flag = 0;

  for (int i = 0; i < n; i++) {
    iCtr++;
    endPtr = i + 1;
    currentSum = arr[i];
    while (currentSum + arr[endPtr] != s && currentSum + arr[endPtr] < s) {
      whileCtr++;
      currentSum += arr[endPtr];
      if (endPtr < n - 1) {
        endPtr++;
      }

      else
        break;
    }

    if (currentSum + arr[endPtr] == s) {
      cout << "Starting position is: " << i + 1 << endl;
      cout << "Ending position is: " << ++endPtr << endl;
      flag = 1;
      break;
    }
  }

  if (flag == 0)
    cout << "There exists no sub-array that sum up to " << s << endl;

  cout << "I Counter: " << iCtr << endl;
  cout << "While Counter: " << whileCtr << endl;
}

int main() {

  // INPUT
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // FUNCTION
  int s;
  cin >> s;
  subArrWithGivenSum_bF(arr, n, s);

  // OUTPUT
  return 0;
}