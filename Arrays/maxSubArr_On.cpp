#include<iostream>

using namespace std;

void maxSubArr_On(int arr[], int n){
  int newArr[n], current = 0, ptr = 0;

  for(int i=0; i<n; i++){
    if(arr[i] >= 0){
      current += arr[i];
    }
    else{
      newArr[ptr] = current;
      current = 0;
      ptr++;
      newArr[ptr] = arr[i];
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
  maxSubArr_On(arr, n);

  // OUTPUT
  return 0;
}



// 1 -1 3 4 -7 6 5

// 1 -1 7 -7 11 


// -1 4 7 2

// -1 13


// -----------------------------------------------
// [31, −41, 59, 26, −53, 58, 97, −93, −23, 84]

// 31 -41 85 -53 155 -93 -23 84

// 31 -41 85 -53 155 -116 84


// -----------------------------------------------

// [−41, 59, 26, −53, 58, 97, −93, −23, 84]

// -41 85 -53 155 -116 84