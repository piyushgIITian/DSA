#include<iostream>
//Write your includes here!
//Have Fun Coding! <3


using namespace std;


int main()
{
    //Write your code here
    long n;
    cin >> n;
    long i=0;
    

    for(i=1;i<=n;i++){
        long total_knights_positions = i*i*(i*i-1)*0.5 ; //nc2
        long attacking_knights_positions  = (i-2)*(i-1)*2*2;  // total number of 2*3 and 3*2 matrix in entire board. and in each matrix there are two attacking combinations
        cout << total_knights_positions - attacking_knights_positions<< endl;
    }
    return 0;
}