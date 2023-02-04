#include<iostream>
#include<climits>

using namespace std;

void maxSubArr(int arr[], int n){

  double current, max = INT_MIN;
  int posArr[2];
  for(int i=0; i<n; i++){    
    current = 0;
    for(int j=i; j<n; j++){
      current += arr[j];
      if(current > max){
        max = current;
        posArr[0] = i;
        posArr[1] = j;        
      }
    }
  }

  cout << max << endl;
  cout << "Array starting index is: " << posArr[0] << endl;
  cout << "Array ending index is: " << posArr[1] << endl;
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
  maxSubArr(arr, n);
  // OUTPUT
  return 0;
}