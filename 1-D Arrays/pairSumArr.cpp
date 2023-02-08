#include <iostream>

using namespace std;

void insertionSortArr(int arr[][2], int n) {
  // Testcase: 7 8 5 2 4 6 3
  int marker, tempVal, tempLoc;
  for (int i = 1; i < n; i++) {
    marker = i;

    while (arr[marker][0] < arr[marker - 1][0] && marker >= 1) {

      tempVal = arr[marker][0];
      tempLoc = arr[marker][1];

      arr[marker][0] = arr[marker - 1][0];
      arr[marker][1] = arr[marker - 1][1];

      arr[marker - 1][0] = tempVal;
      arr[marker - 1][1] = tempLoc;
      marker--;
    }
  }
}

void pairSumArr(int arr[][2], int n, int target) {
  // 10
  // 11 13 3 1 25 52 31 12 14 45
  insertionSortArr(arr, n);

  int low = 0, high = n - 1;
  bool flag = 0;

  while (low < high) {
    if (arr[low][0] + arr[high][0] > target) {
      high--;
    } else if (arr[low][0] + arr[high][0] < target) {
      low++;
    } else {
      cout << arr[low][1] << " " << arr[high][1];
      flag = 1;
      break;
    }
  }

  if (flag == 0) {
    cout << "No sum pairs available";
  }
}

int main() {

  // INPUT
  int n;
  cin >> n;

  int arr[n][2];
  for (int i = 0; i < n; i++) {
    cin >> arr[i][0];
    arr[i][1] = i;
  }

  int target;
  cin >> target;
  // FUNCTION
  pairSumArr(arr, n, target);

  // OUTPUT
  return 0;
}