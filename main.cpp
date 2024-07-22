/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//7789 



#include <iostream>
using namespace std;

void printDigits(){
    
    int n = 7789 ;
    int lastDigit ;
    
    while (n>0){
        
        lastDigit = n % 10;
        cout << lastDigit;
        
        
        n = n/10;
        
   
        
    }
   cout << endl; 
}
int main(){
    
    printDigits();
    return 0;
}