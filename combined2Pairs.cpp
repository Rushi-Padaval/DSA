


#include<iostream>
#include<utility>
using namespace std ;


void pairs(){
    
    pair<int, pair<int,int>>   p={1,{2,3}};
    pair <int, pair<int,int>>  q= {4,{5,6}};
    
    pair <  pair<int, pair<int,int>>, pair <int, pair<int,int>>> nestedPair = {p,q};
    
    cout << "Nested pair: "<< endl ;
    
    cout << nestedPair.second.second.first    ;
}

int main(){
    pairs();
    return 0;
}   