#include <iostream>
using namespace std;

int main()
{
      //   Binary To Decimal

      int num;
      cout<<"Enter the number: ";
      cin>>num;
      int mul = 1, ans = 0, rem;

      while (num>0)
      {
            // Reminder
            rem = num % 10;
            // Number ko divide kar do
            num = num / 10;
            // ans
            ans = mul * rem + ans;
            // mul
            mul *= 2;
      }
      cout << ans << endl;
}
