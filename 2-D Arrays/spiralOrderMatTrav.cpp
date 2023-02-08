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

  int total = n * m;

  // OUTPUT
  return 0;
}