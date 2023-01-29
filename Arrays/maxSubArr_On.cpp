#include<iostream>

using namespace std;

void maxSubArr_On(int arr[], int n){
  int current = 0, newArr[n], maxVal = 0, prevSt, prevEn, newSt = 0, newEn;


  for(int i=0; i<n; i++) {
    newArr[i] = INT_MIN;    
  }

  for(int i=0; i<n; i++){
    current += arr[i];    
    newArr[i] = current;    

    if(newArr[i] > maxVal){
      maxVal = newArr[i];      
      newEn = i;
    }

    if(newArr[i] <= 0){
      current = 0;
      prevSt = newSt;
      newSt = (i < n-1) ? i+1: i;
      prevEn = newEn;
    }    
  }  

  cout << "Maximum Subarray value: " << maxVal << endl;  
  cout << "Start Index: " << newSt << endl;
  cout << "End Index: " << newEn << endl;
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

// 1 0 3 7 0 6 11


// -----------------------------------------------
// [31, −41, 59, 26, −53, 58, 97, −93, −23, 84]
// 31 -10 59 85 32 90 187 94 71 155

// -----------------------------------------------

// [31, −31, 59, 26, −53, 58, 97, −93, −23, 84]


// -----------------------------------------------

// [−41, 59, 26, −53, 58, 97, −93, −23, 84]
// -41 85 32 90 187 94 71 155

// -----------------------------------------------

// -1 2 3 -4 5 10
// -1 5 -4 15

// -----------------------------------------------

// 2 -1 2 3 4 -5
// 1 10 5

// -----------------------------------------------

// -2 1 -3 4 -1 2 1 -5 4
// -2 1 -2 4  3 5 6  1 5

// -----------------------------------------------

// 5 4 -1 7 8
// 5 9  8 15 23