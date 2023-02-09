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
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define ppb pop_back
#define eb emplace_back
using namespace std;



int main()
{
//  Write your code here 
    lli n;
    cin>>n;
    vector<lli> set1;
    vector<lli> set2;
   
    lli sum = (n*(n+1)) / 2;

    if(sum%2==0){
        cout << "YES" << endl;
        lli mid = sum / 2;
        for(lli i=n;i>=1;i--){
            if(i<=mid){
                set1.push_back(i);
                mid = mid - i;
            }else{
                set2.push_back(i);
            }
        }
        cout << set1.size() << endl;
        for(lli j=0;j<(int)set1.size();j++){
            cout << set1[j] << " ";
        }
        cout << "\n" << set2.size() <<endl;
        for(lli j=0;j<(int)set2.size();j++){
            cout << set2[j] << " ";
        }

    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}