#include <iostream>
using namespace std;


void Sum (int m,int n)  // Function declare
{
      int ans = m + n; // Function Define
      cout << ans << endl;
}


int Mul(int m,int n)
{
   int ans = m*n;
   return ans;
}

void fun()
{
   cout << "Hello Vinay\n ";

}


int main()
{
      int a, b;
      cout << "Enter 2 number: ";
      cin >> a >> b;

      // Function Call
      Sum(a, b);
      cout << Mul(a, b);
      cout << endl;
      fun();
}
