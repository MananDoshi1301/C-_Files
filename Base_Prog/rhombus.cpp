#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter length: ";
    cin >> n;

    for (int i = 0; i < n; i++){        
        for (int k = n - 1; k > i; k--){
            cout << "\t";
        }
        for (int k = 0; k < n; k++){
            cout << "*\t";
        } 
        cout << endl;
    }

    return 0;
}