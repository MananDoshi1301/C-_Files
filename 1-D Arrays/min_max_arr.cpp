#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements with a space: ";

    int arr[n], minNum = INT_MAX, maxNum = INT_MIN;
    for ( int i=0; i<n; i++){
        cin >> arr[i];
        // if (arr[i] < minNum) minNum = arr[i];
        // if (arr[i] > maxNum) maxNum = arr[i];
        maxNum = max(arr[i], maxNum);
        minNum = min(arr[i], minNum);
    }

    cout << "Maximum number in the array is: " << maxNum << endl;
    cout << "Minimum number in the array is: " << minNum << endl;
    return 0;
}