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

int min(int a, int b){
    if(a < b) return a;
    else return b;
}
vector<int> coins(101,0);
int solve(int n){
    if(n==0) return 0;
    if(n<0) return -1;
    int ans = INF;

    for(int i=1;i<coins.size();i++){
        int val = solve(n-coins[i]);
        if(val !=-1)
           ans =  min(val+1,ans);
    }
    if(ans == INF) return -1;
    return ans;
    
}

int main()
{
//  Write your code here 
    // int sum,n;
    
    
    // cin >> n>>sum;
    // // cout << "n"<<n<<"sum"<<sum<<endl;
    // for(int i=0;i<n;i++){
    //     int temp;
    //     cin >> temp;
    //     coins[i] = temp;
    //     cout << (coins[i]);
    // }
    int a=5;
    cout << (++a) * (++a) <<endl;
    return 0;
}