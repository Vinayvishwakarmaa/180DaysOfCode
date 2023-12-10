#include <iostream>
using namespace std;


int main()
{
      // int row,col;

      // for (row = 1; row <=5;row=row+1){
      //       for (col = 1; col <= row; col=col+1){
      //             cout << "*" << " ";
      //       }
      //       cout << endl;
      // }

//   OutPut
// * 
// * *
// * * *
// * * * *
// * * * * *
                  /** Question 2 */

                  // int row,col;

                  // for (row = 1; row <= 5;row=row+1){
                  //       for (col = 1; col <= row;col=col+1){
                  //             cout << col << " ";
                  //       }
                  //       cout << endl;
                  // }

                  // Output 
                  // 1 
                  // 1 2
                  // 1 2 3
                  // 1 2 3 4
                  // 1 2 3 4 5

                  // Question 3

                  // int row, col;

                  // for (row = 1; row <= 5;row=row+1){
                  //       for (col = 1; col <= row;col=col+1){
                  //             cout << row << " ";
                  //       }
                  //       cout << endl;
                  // }

                  // Output
                  // 1 
                  // 2 2
                  // 3 3 3
                  // 4 4 4 4
                  // 5 5 5 5 5

            //      Question 4

      // int row, col;

      // for (row = 1; row <= 5;row=row+1){
      //       for (col = row; col >= 1; col= col -1)
      //       {
      //             cout << col << " ";     
      //       }
      //       cout << endl;
      // }

            //  Output
            // 2 1
            // 3 2 1
            // 4 3 2 1
            // 5 4 3 2 1


           // Home Work Question 1
            // int row, col;
            //       for (row = 1; row <= 5;row=row+1){
            //             char name = 'a' + row -1;
            //             for (col = 1; col <= row;col=col+1){
            //                   cout << name << " ";
            //             }
            //             cout << endl;
            //       }
//                OutPut 
                  // a
                  // b b                      
                  // c c c
                  // d d d d
                  // e e e e e

            // Question 5
            
      //       int row,col;

      //      for (row = 1; row <=5;row=row+1){
               
      //          for (col = 1; col<= 5-(row -1); col=col+1){
      //             cout << "*"<< " ";
      //       }
      //       cout << endl;
      // }
                   // OutPut 5

                  //  * * * * * 
                  //  * * * *
                  //  * * *
                  //  * *
                  //  *

      //      2 Approch


      // int row, col;
      // for (row = 5; row >= 1;row=row-1){
      //       for (col = 1; col <= row;col=col+1){
      //             cout << "*"
      //                  << " ";
      //       }
      //       cout << endl;
      // }

         
                  //  * * * * * 
                  //  * * * *
                  //  * * *
                  //  * *
                  //  *


            //     Question 7

      //       int row,col;

      //      for (row = 1; row <=5;row=row+1){
               
      //          for (col = 1; col<= 5-(row -1); col=col+1){
      //             cout << col << " ";
      //       }
      //       cout << endl;
      // }

            //  Output

            // 1 2 3 4 5 
            // 1 2 3 4
            // 1 2 3
            // 1 2
            // 1

            //    Question 8

      int row, col;

      for (row = 1; row <= 5;row=row+1){
            for (col = 5; col >=5-row+1;col=col-1)
            {
                  cout << col << " ";
            }
            cout << endl;
      }
}
