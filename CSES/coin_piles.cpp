//Author: Piyush Gautam, IIT Kharagpur
//Contact: mailto:piyushgautamtg@gmail.com
//Have Fun Coding! <3<3


/********   All Required Header Files ********/

#include<iostream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

#define lli long long int 
#define li long int
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define sp <<" "<<

/* FUNCTIONS */
#define fr(s,e) for(long long int i=s;i<e;i++)
#define cf(s,e) for(long long int i=s;i<=e;i++)
#define rf(e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define ppb pop_back
#define eb emplace_back
using namespace std;


int main()
{
//  Write your code here 
    lli t;
    cin>> t;
    while(t--){
        lli a,b;
        cin >> a>>b;
    //     bool flag = false;
    //     if(a==0 && b==0) {flag = true; cout<<"YES"<<endl;}
    //     if(a==0 || b==0) {flag = true; cout << "NO" << endl;}
    //     while(a>=0 && b>=0 && !flag){
            
    //         if(a==0 && b==0){
    //             cout << "YES"<<endl;
    //             flag = true;
    //             break;
    //         }
    //         else{
    //             if(a>b){
    //             a-=2;
    //             b-=1;
    //             }else
    //             if(a==b){
    //                 a-=2;
    //                 b-=1;
    //             }else
    //             if(a<b){
    //                 a-=1;
    //                 b-=2;
    //             }
    //         } 
    //     }
    //     if(!flag){
    //         cout << "NO"<< endl;
    //     }

    // }
    string ans;
    if(2*a-b<0 || 2*b-a<0) ans = "NO";
    else{
        if((2*a-b)%3==0){
            if((2*b-a)%3==0) ans = "YES";
        }else{
            ans = "NO";
        }
    }


    cout <<  ans << endl;
    }
    return 0;
}