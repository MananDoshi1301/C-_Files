#include <iostream>

using namespace std;

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
    int key;
    bool flag = 0;
    cout << "Enter key value to search: ";
    cin >> key;
    for (int i=0; i<n; i++){
        if (arr[i] == key) {
            cout << "Entered key exists in the array";
            flag = 1;
            break;
        }
    }

    if(flag == 0) cout << "Entered key does not exist in the array!";

    return 0;
}