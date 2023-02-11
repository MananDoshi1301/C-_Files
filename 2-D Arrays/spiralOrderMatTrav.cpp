#include <iostream>

using namespace std;

// void spiralOrderMatTrav(int *arr, int n, int m) {

//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < m; j++) {
//       cout << (arr + i)[j] << " ";
//     }
//     cout << endl;
//   }
// }

int main() {

  // INPUT
  int n, m;
  cin >> n;
  cin >> m;

  int arr[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  // FUNCTION
  // spiralOrderMatTrav(&arr[0][0], n, m);

  int total = n * m, x_marker = 0, y_marker = 0;
  int newArr[total] = {0};

  while (total > 0) {

    // col_trav
    for (int j = x_marker; j < (m - 1 - x_marker); j++) {
      // cout << arr[y_marker][j] << "\t";
      newArr[n * m - total] = arr[y_marker][j];
      total--;
      if (total == 1)
        break;
    }
    // cout << endl;

    // row_trav
    for (int i = y_marker; i < n - 1 - y_marker; i++) {
      // cout << arr[i][m - 1 - x_marker] << "\t";
      newArr[n * m - total] = arr[i][m - 1 - x_marker];
      total--;
    }
    // cout << endl;

    // col_rev_trav
    for (int j = m - 1 - x_marker; j > x_marker; j--) {
      // cout << arr[n - 1 - y_marker][j] << "\t";
      newArr[n * m - total] = arr[n - 1 - y_marker][j];
      total--;
    }
    // cout << endl;

    // row_rev_trav
    for (int i = n - 1 - y_marker; i > y_marker; i--) {
      // cout << arr[i][x_marker] << "\t";
      newArr[n * m - total] = arr[i][x_marker];
      total--;
    }
    // cout << endl;

    x_marker++;
    y_marker++;
    if ((n * m) % 2 == 1 && (n - 2 * x_marker) == 1) {
      newArr[n * m - total] = arr[n / 2][m / 2];
      break;
    }
  }

  total = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << newArr[total++] << "\t";
    }
    cout << endl;
  }
  // OUTPUT
  return 0;
}