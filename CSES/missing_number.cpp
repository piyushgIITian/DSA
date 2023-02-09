#include<iostream>

//Write your includes here!
//Have Fun Coding! <3


using namespace std;


int main()
{
    //Write your code here
    int n;
    cin >> n;
    int temp;
    long sum1 = 0;
    long sum2 = 0;

    for (int i = 0; i < n-1; i++){
        cin >> temp;
        sum1 += temp;
        sum2 += i+1;
    }

    sum2+= n;
    cout << sum2-sum1;

   
    return 0;
}