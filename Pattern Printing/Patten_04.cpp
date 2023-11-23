#include <iostream>
using namespace std;


int main(){
   
       // Question 2

//     int row,col;
//     int n;
//     cout<<"Enter the number: ";
//     cin >> n;

//     for (row = 1; row <= n;row=row+1){
      
//       //  Space Print
//       for (col = 1; col<=n-row;col=col+1)
//             cout << "  ";
//       //  Print
//       for (col = 1; col<=2*row-1;col=col+1)
//             cout << "* ";
//             cout << endl;
//     }
     
      //      Output

                  //   *
                  // * * *       
            //     * * * * *     
            //   * * * * * * *   
            // * * * * * * * * *


            // Question 2

      //    int row, col;
      //    int n;
      //    cout << "Enter the number: ";
      //    cin >> n;

      //    for (row = 1; row <=n;row=row+1){
      //       // Space Print
      //       for (col = 1; col <= n - row;col=col+1)
      //             cout << "  ";
      //             // 1 to row
      //       for (col = 1; col <=row;col=col+1)  
      //             cout << col<<" "; 
      //       //   row-1 to 1
      //       for (col = row - 1; col >= 1;col=col-1)
      //             cout << col << " ";
      //             cout << endl;
      //    }
                        // Output
                        //    1 
                        //  1 2 1
                  //      1 2 3 2 1
                  //    1 2 3 4 3 2 1
                  //  1 2 3 4 5 4 3 2 1




            //     Question 3

      //    int row,col;
      //    int n;
      //    cout << "Enter the number: ";
      //    cin >> n;

      //    for (row = n; row >= 1;row=row-1){
      //       //   Space Print
      //       for (col = 1; col <= n-row;col=col+1)
      //             cout << "  ";
      //       //  Star Print
      //       for (col = 1; col<=2*row-1;col=col+1)
      //         cout<< "* ";
      //        cout << endl;
      //    }

             //Output

            //  * * * * * * * * * * * 
            //    * * * * * * * * *
            //      * * * * * * *
            //        * * * * * 
            //          * * *
            //            *     

             
            //   Question 4

      //  int row, col, n;
      //  cout<<"Enter the input: ";
      //  cin >> n;

      //  for (row = n; row >= 1;row=row-1)
      //  {
      //       // Print *
      //       for (col = 1; col <= row;col=col+1)
      //             cout << "* ";
      //       // Print Space
      //       for (col = 1; col <=2*n-2*row;col=col+1)
      //             cout << "  ";
      //             // Print *
      //             for (col = 1; col <= row; col = col + 1)
      //             cout << "* ";
      //             cout << endl;
      //  }

       
      //  for (row = 1; row<=n ;row=row+1)
      //  {
      //       // Print *
      //       for (col = 1; col <=row;col=col+1)
      //             cout << "* ";
      //       // Print Space
      //       for (col = 1; col <=2*n-2*row;col=col+1)
      //             cout << "  ";
      //             // Print *
      //             for (col = 1; col <= row; col = col + 1)
      //             cout << "* ";
      //             cout << endl;
      //  }

            //   Output
            //    * * * * * * * * * * 
            //    * * * *     * * * * 
            //    * * *         * * * 
            //    * *             * * 
            //    *                 * 
            //    *                 * 
            //    * *             * * 
            //    * * *         * * * 
            //    * * * *     * * * * 
            //    * * * * * * * * * *



            // Question 5

//        int row, col, n;
//        cout<<"Enter the input: ";
//        cin >> n;

//        for (row = 1; row <= n;row=row+1)
//        {
//              //  * Print
//        for (col = 1; col <= row;col=col+1)
//             cout << "* ";
//             // Space Print
//      for (col = 1; col<=2*n-2*row;col=col+1)
//             cout << "  ";
//                  //  * Print
//             for (col = 1; col <= row; col = col + 1)
//                   cout << "* ";
//                    cout << endl;
//        }

//        for (row = n-1; row >= 1; row = row - 1)
//        {
//              //  * Print
//        for (col = 1; col <= row;col=col+1)
//             cout << "* ";
//             // Space Print
//        for (col = 1; col<=2*n-2*row;col=col+1)
//             cout << "  ";
//                  //  * Print
//          for (col = 1; col <= row; col = col + 1)
//                   cout << "* ";
//                    cout << endl;
//        }
        
      
                // Output
  
            // *                 * 
            // * *             * *
            // * * *         * * *
            // * * * *     * * * *
            // * * * * * * * * * *
            // * * * *     * * * *
            // * * *         * * * 
            // * *             * *
            // *                 *

}
