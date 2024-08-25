  
  #include <bits/stdc++.h>
  using namespace std;
  
  
  
void pointer(int* a ,int* b) {
      int temp = *a;
      cout<<a<<endl;
      cout<<*a<<endl;
      cout<<b<<endl;
      cout<<*b<<endl;
      
      *a=*b;
      *b=temp;
  }
  
  
  int main () {
      int n = 25 ;
      cout<<&n<<endl;
      int m=22;
      cout<<&m<<endl;
      pointer(&n,&m);
       cout<<n<<"\n"<<m;
     return 0 ;
      
  }