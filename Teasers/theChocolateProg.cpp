#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter number of rupees: ";
    cin >> n;

    int totChoc = 0, totWrap = 0, newChoc;
    totChoc = n;  // 15
    totWrap = totChoc; // 15
    while(totWrap > 2){
        newChoc = totWrap / 3; // 5
        totChoc += newChoc;  // 20
        if(totWrap % 3 == 0) totWrap /= 3;
        else {
            totWrap = (totWrap % 3) + newChoc;
        }
    }

    cout << "Total chocolates we can buy is: " << totChoc;
    return 0;
}