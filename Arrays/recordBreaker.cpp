#include <climits>
#include <iostream>

using namespace std;

void recordBreaker(int arr[], int n) {

  int maxVisit = INT_MIN, count = 0;
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] > maxVisit && arr[i] > arr[i + 1]) {
      count++;
      maxVisit = arr[i];
    }
  }

  if (arr[n - 1] > maxVisit) {
    count++;
    maxVisit = arr[n - 1];
  }
  cout << count << endl;
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
  recordBreaker(arr, n);
  // OUTPUT
  return 0;
}