#include <iostream>
#include <string>

using namespace std;

string fibo (int n){

    int first_term = 0, second_term = 1, c;
    string fibo_seq="0 1 ";
    for (int i=2; i<n; i++){
        c = first_term + second_term;
        fibo_seq.append(to_string(c) + " ");
        first_term = second_term;
        second_term = c;
    }

    return fibo_seq;
}

int main() {

    int n;
    cout << "Enter number till which fibo sequence is required: ";
    cin >> n;

    if (n == 0){
        cout << "No numbers to display";
    }
    else if(n == 1){
        cout << 0;
    }
    else if (n == 2){
        cout << 0 << " " << 1;    
    }
    else{
        cout << fibo (n);
    }

    return 0;
}