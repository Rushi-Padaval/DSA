#include<bits/stdc++.h>
using namespace std ;


void print(int n, int sum){
    if( n < 1){
        
        cout<< sum ;
        return ;
    }
    print(n -1 , sum + n);
}


int main () {
    int n ;
    cin >> n ;
    int sum = 0;
    print(n , sum );
    return 0 ;
}







// output 
// 4 = 10
// 4+3+2+1 = 10 