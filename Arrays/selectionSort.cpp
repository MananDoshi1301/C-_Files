#include <iostream>
#include <chrono>

using namespace std;

void outputArr (int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main() {

    // INPUT
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements with a space: ";

    int arr[n], minNum = INT_MAX, maxNum = INT_MIN;
    
    for ( int i=0; i<n; i++){
        cin >> arr[i];                
    }

    // FUNCTION
    int t;
    for (int i=0; i<n-1; i++){
        for(int j = i+1; j < n; j++){
            if (arr[j] < arr[i]){
                t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }    


    // OUTPUT
    cout << "Sorted array is as follows:\n";    
    outputArr(arr, n);
        
    return 0;
}