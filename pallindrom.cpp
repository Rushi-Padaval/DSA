

#include <iostream>
using namespace std ;




void Number(){
    int n ;
 
    int reverseNumber = 0;
    

       
    cin >> n;
    
           int dup = n ;
    while (n>0){
        
        int ld =  n % 10;
        
        
        reverseNumber = (reverseNumber * 10) + ld ;
        
        
        n = n / 10 ;
        
        
    }
   
    
    if (dup == reverseNumber ) cout <<  "True";
        else cout << "False";
        
    }
    
    






int main()
{
    Number();

    return 0;
}





