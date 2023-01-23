#include <iostream>

using namespace std;

void sumOfAllSubArr (int arr[], int n){

  double sum=0, current;
  for(int i=0; i<n; i++){
    current = 0;
    for(int j=i; j<n; j++){
      current += arr[j];
      sum += current;
    }
  }
  cout << sum << endl;
  
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
  sumOfAllSubArr(arr, n);

  // OUTPUT
  return 0;
}