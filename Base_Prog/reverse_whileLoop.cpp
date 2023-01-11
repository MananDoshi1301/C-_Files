#include <iostream>

using namespace std;

int main() {

    int n, r = 0;

    cout << "Enter a number to reverse: ";
    cin >> n;

    while(n > 0){
        r = (r * 10) + (n % 10);
        n /= 10;
    }

    cout << "Reversed number: " << r;
    return 0;
}