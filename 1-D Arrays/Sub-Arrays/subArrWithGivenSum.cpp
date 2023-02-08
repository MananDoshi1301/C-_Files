#include<iostream>

using namespace std;

void printSum(int sum){
  cout << "Sum: " << sum << endl;
}

void subArrWithGivenSum(int a[], int n, int s){

  int i=0, j=0, st=-1, en =-1, sum=0, ctr = 0;

  while (j<n && sum+a[j] <= s){
    ctr++;
    sum += a[j];
    j++;
  }

  // printSum(sum); 

  if(sum == s){
    ctr++;
    cout << i + 1 << " " << j << endl;    
    return ;
  }  

  while(j<n){
    ctr++;
    sum += a[j];
    // printSum(sum);
    while(sum > s) {
      // cout << "In while while" << endl;
      ctr++;
      sum -= a[i];
      i++;
      // printSum(sum);
    }

    if(sum == s){
      ctr++;
      st = i + 1;
      en = j + 1;
      break;
    }

    j++;
  }

  cout << st << " " << en << endl;
  cout << ctr << endl;
  
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
  int s;
  cin >> s;
  subArrWithGivenSum(arr, n, s);

  // OUTPUT
  return 0;
}