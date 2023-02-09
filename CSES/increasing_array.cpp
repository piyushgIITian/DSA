#include<iostream>
//Write your includes here!
//Have Fun Coding! <3


using namespace std;


int main()
{
    //Write your code here
    long n;
    cin >> n;
    long arr[n];
    long moves = 0; 
    for(long i=0;i<n;i++){
        cin >> arr[i];
    }
    for(long i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            while(arr[i+1]!=arr[i]){
                arr[i+1]++;
                moves++;
            }
        }
    }
    cout << moves << endl;
    return 0;
}