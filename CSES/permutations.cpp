#include<iostream>
//Write your includes here!
//Have Fun Coding! <3


using namespace std;

void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    //Write your code here
    int n;
    cin >> n;
    
    int flag=1;
    // for(int i=1;i<=n;i++){
        
    //     if(i-flag!=1){
    //         flag = i;
    //         cout << flag;
    //     }
        
    // }
    if(n<=3 && n!=1){
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    
     for(int i=1;i<=n;i++){
        if(i%2==0){
            cout << i << " ";
        }
    }
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            cout << i << " ";
        }
    }
    
    
    return 0;
}