#include <climits>
#include <iostream>

using namespace std;

void maxCircSubArrSum(int arr[], int n) {
  int marker, maxValue = INT_MIN, current = 0, endMarker, extraIter = 0;
  bool flag = 0;

  for (int i = 0; i < n; i++) {
    if (current + arr[i] <= 0) {
      current = 0;
      flag = 0;
    } else if (current + arr[i] > maxValue) {
      current += arr[i];
      maxValue = current;
      if (flag == 0) {
        marker = i;
        flag = 1;
        extraIter = i;
      } else {
        endMarker = i;
      }
    } else {
      current += arr[i];
    }
  }

  int i = 0;
  if (current != 0) {
    while (i < extraIter && current > 0) {
      current += arr[i];
      if (current > maxValue) {
        maxValue = current;
        endMarker = i;
      }
      i++;
    }
  }

  cout << "Max Subarray Value: " << maxValue << endl;
  cout << "Start Index: " << marker << endl;
  cout << "End Index: " << endMarker << endl;
}

int main() {

  // INPUT
  int n;
  cin >> n;

  int arr[] = {4, -4, 6, -6, 10, -11, 12};
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // FUNCTION
  maxCircSubArrSum(arr, n);
  // OUTPUT
  return 0;
}