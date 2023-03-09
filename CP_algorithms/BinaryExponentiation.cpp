//Author: Piyush Gautam, IIT Kharagpur
//Contact: mailto:piyushgautamtg@gmail.com
//Have Fun Coding! <3<3


/********   All Required Header Files ********/

#include<iostream>
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


// https://cp-algorithms.com/algebra/binary-exp.html

lli binpow(lli a, lli n){
    if(n==0) return 1;
    lli res = binpow(a,n/2);
    if(n&1) return res*res*a;
    else return res*res;
}
lli binpowiter(lli a, lli n){
    lli res = 1;
    while(n>0){
      
        if(n&1) res = res*a;   // n&1 checks for odd numbers
        a = a*a; // seperate squares from numbers
        n>>=1;  
    }
    return res;
}
int main()
{
//  Write your code here 

    cout << "BinaryExponentiation iterative "<<binpowiter(3,3) <<endl;
    cout << "BinaryExponentiation recursive "<<binpow(3,3) <<endl;
    return 0;
}