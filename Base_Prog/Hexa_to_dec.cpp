#include <iostream>
#include <cmath>

using namespace std;

int main() {

    string n;
    cout << "Enter string for conversion: ";
    cin >> n;
    int r = 0, counter = n.size() - 1;

    for (int i = 0;  i < n.size(); i++){
        if (n[i] >= '0' && n[i] <= '9'){
            r += int(n[i] - '0') * pow(16, counter);
        }
        else if (n[i] >= 'A' && n[i] <= 'F'){
            r += int(n[i] - 'A' + 10) * pow(16, counter);
        }
        else {            
            cout << "Invalid Hexadecimal String with the character: " << n[i];
            return 0;
        }
        counter --;
    }

    cout << r;
    return 0;
}