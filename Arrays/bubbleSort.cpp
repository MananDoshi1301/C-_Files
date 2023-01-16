#include <iostream>

using namespace std;

void outputArr (int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main() {

    // INPUT
    int n;
    cout << "Enter number of elements for sorting: ";
    cin >> n;

    cout << "Enter " << n << " elements with a space: ";

    int arr[n], minNum = INT_MAX, maxNum = INT_MIN;
    
    for ( int i=0; i<n; i++){
        cin >> arr[i];                
    }

    //FUNCTION
    int t;
    bool isChanged = false;

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if (arr[j] > arr[j+1]){
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
                isChanged = true;
            }
        }        
        if(isChanged == false) break;
    }

    // OUTPUT 
    cout << "Sorted array is as follows:\n";    
    outputArr(arr, n);
    return 0;
}