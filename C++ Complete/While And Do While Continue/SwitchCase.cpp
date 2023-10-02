#include <iostream>
using namespace std;


int main(){

      // Switch Statement

      int i;
      cout << "Enter the numer: ";
      cin >> i;

        switch (i)
        {
        case 1:
              cout << "Vinay";
              break;
            case 2:
              cout << "Come";
              break;
              case 3:
              cout << "Here";
              break;
        default:
              cout << "This is the empty input";
              break;
        }
}