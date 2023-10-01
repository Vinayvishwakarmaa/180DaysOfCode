#include <iostream>
using namespace std;


int main(){

      //  Question 1

      // int row, col;
      // int n;
      // cout << "Input the number: ";
      // cin >> n;

      // for (row = 1; row<=n;row=row+1){
        
      //      Space Print
      //    for (col = 1; col<=n-row;col=col+1)
      //          cout << "  ";
             //     Star Print
      //          for (col = 1; col <=row;col=col+1){
      //                cout << "*";
      //          }
      //          cout << endl;
        
      // }

      //     Output 1
            //         *
            //       **
            //     ***
            //   ****
            // *****


         // Question 2
        
      // int row, col;
      // int n;
      // cout << "Input the number: ";
      // cin >> n;

      // for (row = 1; row<=n;row=row+1){
        
       //      Space Print
      //    for (col = 1; col<=n-row;col=col+1)
      //          cout << "  ";
             //     Star Print
      //          for (col = 1; col <=row;col=col+1){
      //          cout << row;
      //          }
      //          cout << endl;
        
      // }

            // Output
                  // 1
            //   22
            // 333
      //     4444
      //   55555
 
           
      //      Question 3

      // int row, col;
      // int n;
      // cout << "Input the number: ";
      // cin >> n;

      //  for (row = 1; row<=n;row=row+1){
        
      //  //      Space Print
      //    for (col = 1; col<=n-row;col=col+1)
      //          cout << "  ";
      //       //      Number Print
      //          for (col = 1; col <=row;col=col+1){
      //          cout << col;
      //          }
      //          cout << endl;
        
      // }
          
          // OutPut
           
                  //     1
            //     12
            //   123
            // 1234
      //     12345

          
            // Question 4
       
      // int row, col;

      // for (row = 1; row <=25;row=row+1){
      //       // Space Print
      //       for (col = 1; col <=25-row;col=col+1)
      //             cout << "  ";
      //       //  Char Print 
      //       for (char name = 'A'; name<='A'+row-1;name=name+1){
          
      //             cout<< name<<" ";
      //       }
      //       cout << endl;
      // }
          // Output

                  //   A
            //    AB
            //  ABC
      //      ABCD
      //    ABCDE
       
      //   4 Question Repeat

      //       int row, col;
      // int n;
      // cout << "Enter the number: ";
      // cin >> n;

      // for (row = 1; row <= n;row=row+1){
      //       // space Print
      //       for (col = 1; col<=n-row;col=col+1)
      //             cout << "  ";
      //       // Char Print
      //       for (col = 1; col<=row;col=col+1){
      //             char name = 'A'+col-1;
      //             cout << name << " ";
      //       }
      //       cout << endl;
      // }

      // Output

      //              A 
      //            A B
      //          A B C
      //        A B C D
      //      A B C D E

            //  Question 5

          // Home Work
       int row, col;
       for (row = 1; row <=5;row=row+1){
            // Space Print
            for (col = 1; col<=row;col=col+1)
            cout << "  ";
            for (col = 1; col<=row;col=col+1){
            cout << row;
            }
            cout << endl;
      }
}