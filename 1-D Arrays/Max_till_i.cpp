#include<iostream>
#include <climits>

using namespace std;

void findMaxTillI (int arr[], int n){
  int maxNum = INT_MIN;
  for(int i=0; i<n; i++){
    if(arr[i] > maxNum) {
      maxNum = arr[i];
    }
    cout << maxNum << endl;
  }
}

int main(){

  // INPUT
  int n;
  cin >> n;  

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // FUNCTION
  findMaxTillI(arr, n);

  // OUTPUT
  return 0;
}