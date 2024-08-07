/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// #include <iostream>

// #include<bits/stdc++.h>

// using namespace std ;





// void print(int i , int  n ){
    
//     if(i< 1){
//         return ; 
//     }
    
    
//             std::cout << i << std::endl;

    
//     print (i - 1, n );
    
    

    
// }

// int main (){
//     int n ;
//     cin >> n ;
//   print(n,n) ;
//   return 0;
// }







// #include <bits/stdc++.h>

// using namespace std ;

// void print(int n, int i); // Function prototype

// int main (){
    
    
//     int n ;
//     cin >> n ;
//     print(n,n);
//     return 0 ;
    
    
    
// }


// void print(int  n , int  i){
 
//  if(n < 1) {
//      return ;
//  }
//     cout << n <<  endl; 
//     print ( n - 1, i ); 
    
    
    
// }


#include<bits/stdc++.h>
using namespace std ;

void print(int n ) ;

int main () {
    int n ;
    cin >> n ;
    print(n);
    return 0 ;
}

void print(int n) {
    if (n < 1){
    return;
    }

 cout << n << endl ;
  print(n-1);

}

