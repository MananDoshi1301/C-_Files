#include <iostream>

using namespace std;

int binarySearch (int arr[], int n, int key){
    int start = 0, end = n-1, mid;

    while (start <= end){
        mid = (start + end) / 2;

        if(arr[mid] == key) {
            return mid;
        }
        else if (key < arr[mid]){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }        
    }

    return -1;
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

    int key;    
    cout << "Enter key value to search: ";
    cin >> key;

    // FUNCTION CALL
    int index = binarySearch(arr, n, key);

    // OUTPUT
    cout << endl;
    if (index == -1) cout << "Element not present in array";
    else cout << "Element is present at " << index << " position in the array";
    return 0;
}