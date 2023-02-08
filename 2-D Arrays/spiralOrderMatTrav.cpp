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

  while (total > 0) {
    for (int i = x_marker; i < (m - 1 - x_marker); i++) {
      cout << arr[y_marker][i] << "\t";
      total--;
    }
    cout << endl;
    y_marker++;
    for (int j = y_marker; j < n - 1 - y_marker; j++) {
      cout << arr[j][n - 1 - x_marker] << "\t";
      total--;
    }
    cout << endl;
    for (int i = m - 2 - x_marker; i >= x_marker; i--) {
      cout << arr[n - 1 - y_marker][i] << "\t";
      total--;
    }
    cout << endl;
  }

  // OUTPUT
  return 0;
}