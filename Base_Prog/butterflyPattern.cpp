#include <iostream>

using namespace std;

int main() {

  int n;
  cout << "Enter number of rows of butterfly: ";
  cin >> n;

  for (int row = 0; row <= (n / 2); row++) {
    for (int start = 0; start <= (n / 2); start++) {      
      if (start <= row)
        if(start != (n/2)) cout << "*\t";
        else cout << "*";
      else
      if(start != (n/2)) cout << "\t";
        else cout << "";        
    }

    for (int end = (n / 2) - 1; end >= 0; end--) {
      // 2, 1, 0
      if (end > row)
        cout << "\t";

      else
        cout << "\t*";
    }
    cout << endl;
  }

  for (int row = (n/2) - 1; row>=0; row--){ 
    for (int start = 0; start <= (n / 2) - 1; start++) {       
      if (start <= row) cout << "*\t";
      else cout << "\t";
    }
    
    for (int end = (n / 2) - 1; end >= 0; end--) {
      if (end > row)
        cout << "\t";

      else
        cout << "\t*";
    }

    cout << endl;
  }

  return 0;
}