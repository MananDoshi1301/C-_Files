#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int n;

    cout << "Enter binary num: ";
    cin >> n;

    int counter = 0, r = 0;

    while(n != 0){

        r += (n % 10) * pow(2, counter);        
        n /= 10;
        counter++;
    }

    cout << "Binary to Deciaml is: " << r;

    return 0;
}