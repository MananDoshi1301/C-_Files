#include <iostream>

using namespace std;

void longestArithmeticSubArr(int arr[], int n) {

  int maxSubArr = -1, diff, startPtr, endPtr;
  for (int i = 0; i < n - 2; ) {

    diff = arr[i + 1] - arr[i];
    startPtr = i + 1;
    endPtr = startPtr + 1;

    while (endPtr < n && diff == (arr[endPtr] - arr[startPtr])) {
      startPtr++;
      endPtr++;
    }

    maxSubArr = (startPtr - i + 1) > maxSubArr ? (startPtr - i + 1) : maxSubArr;

    if (maxSubArr == n)
      break;
    
    i = startPtr;    
  }

  cout << "Longest Arithmetic Sub Arr is: " << maxSubArr << endl;  
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
  longestArithmeticSubArr(arr, n);

  // OUTPUT
  return 0;
}