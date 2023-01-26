#include<iostream>

using namespace std;

void smallestPositiveMissingNumber(int arr[], int n){

  const int N = 1e6 + 2;
  bool checkArr[N];

  for(int i=0; i<N; i++){
    checkArr[i] = false;
  }

  for(int i=0; i<n; i++){
    if(arr[i] >= 0){      
      checkArr[arr[i]] = true;
    }    
  }

  for(int i=0; i<N; i++){    
    
    if(checkArr[i] == false){
      cout << "The smallest missing positive number is: " << i << endl;
      break;
    }
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
  smallestPositiveMissingNumber(arr, n);
  // OUTPUT
  return 0;
}