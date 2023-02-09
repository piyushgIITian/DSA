#include<iostream>
#include<string>
//Write your includes here!
//Have Fun Coding! <3


using namespace std;


int main()
{
    //Write your code here
    string input;
    cin >> input;
    int max_count = 0;
    int count = 0;

    for(int i=0;i<input.size()-1;i++){
        if(input[i] == input[i+1]){
            count++;
        }
        else{
            if(count > max_count)
                max_count = count;
            count =0;
        }
    }
    if(count > max_count)
        max_count = count;
    cout << max_count+1 ;
    return 0;
}

