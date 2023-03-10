//Author: Piyush Gautam, IIT Kharagpur
//Contact: mailto:piyushgautamtg@gmail.com
//Have Fun Coding! <3<3


/********   All Required Header Files ********/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
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

lli dp[10000006];
int main()
{
//  Write your code here 
    int n;
    int x;
    vector<int> coins(n+1);

    cin >> n >> x;
  
    fr(0,n){
        cin >> coins[i];
    }
    fr(0,x){
        dp[x] = INT_MAX;
    }
    dp[0] = 0;
    fr(0,n+1){
        for(int weight=1;weight<=x;weight++){
            if(weight-coins[i-1]>=0){
                dp[weight] = min(dp[weight-coins[i-1]]+1,dp[weight]);
            }
        }
    }
    if(dp[x]==INT_MAX) cout << -1<<endl;
    else cout << dp[x] <<endl;

    return 0;
}