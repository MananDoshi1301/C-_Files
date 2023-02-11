#include <iostream>

using namespace std;

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
  int t;
  for (int i = 0; i < (n - 1); i++) {
    for (int j = i + 1; j < m; j++) {
      t = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = t;
    }
  }

  // OUTPUT
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }
  return 0;
}