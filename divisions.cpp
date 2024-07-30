# include<iostream>

using namespace std ; 

void divsions () {
    
    int n ;
    cin >>  n ;
    
    
    
    for (int i = 1 ; i<= n ; i ++){
        
        
        if ( n%i == 0){
            cout << i << " ";
            
        }
        
        
    }
    cout << endl ;
}
int main () {
    divsions();
    return 0 ;
}