

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

//input 7789
// output 9877
