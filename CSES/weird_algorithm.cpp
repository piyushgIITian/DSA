#include<iostream>
#include<vector>
using namespace std;


int main()
{   
    // read n , if n is even then n/2 if n is odd then 3n+1 if n is 1 print all n
    long n;
    
    cin>>n;
    cout << n << " ";
    while(n!=1){
      
        if(n%2==0){
            n = n/2;
            cout << n << " ";
        }
        else{
            n = 3*n + 1;
            cout << n << " ";
        }    
    }
   
    return 0;
}