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


int main()
{   
   //method 1

    // vector<lli> inputs;
    // lli n;
    // cin >> n;
    // fr(0,n){
    //     lli temp;
    //     cin >> temp;
    //     inputs.pb(temp);
    // }
    // sort(inputs.begin(), inputs.end());
    // lli prev=inputs[0];
    // lli count = 0;
    // cf(1,n){
    //     if(inputs[i]!=prev){
    //         count++;
    //     }
    //     prev = inputs[i];
    // }
    // cout << count;
    // return 0;

    // method 2 
    set<int> unique_numbers;
    lli n;
    cin >> n;
    fr(0,n){
        lli temp;
        cin >> temp;
        unique_numbers.insert(temp);
    }
    cout << unique_numbers.size();
    return 0;
}