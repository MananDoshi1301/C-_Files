#include <iostream>

using namespace std;

void outputArr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {

  // INPUT
  int n;
  cout << "Enter number of elements for sorting: ";
  cin >> n;

  cout << "Enter " << n << " elements with a space: ";

  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // FUNCTION
  int j, current;
  for (int i = 1; i < n; i++) {

    j = i - 1;
    current = arr[i];

    while (current < arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = current;
  }

  // OUTPUT
  cout << "Sorted array is as follows:\n";
  outputArr(arr, n);

  return 0;
}