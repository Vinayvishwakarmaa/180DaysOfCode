#include <iostream>
using namespace std;


//  Swap Two Numbers

void Swap(int &a,int &b) // Pass by reference
{
      int c;
      c=a;
      a = b;
      b = c; 
}


void Swap(float &c,float &d) // Function overloading mtlb ek type do function  aa chuke hai
{
      float r = c;
      c = d;
      d = r;
}




int main()
{
      //  Swap Two Numbers

    int a,b;
    cin >> a >> b;

    Swap(a, b);
    cout << a << " " << b <<endl;

    float f1 = 4.8, f2 = 3.9;
    Swap(f1, f2);
    cout << f1 << " " << f2 << " ";
}