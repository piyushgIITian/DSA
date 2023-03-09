// Author: Piyush Gautam, IIT Kharagpur
// Contact: mailto:piyushgautamtg@gmail.com
// Have Fun Coding! <3<3

/********   All Required Header Files ********/

#include <iostream>
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
#include <unordered_map>
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
#define sp << " " <<

/* FUNCTIONS */
#define fr(s, e) for (long long int i = s; i < e; i++)
#define cf(s, e) for (long long int i = s; i <= e; i++)
#define rf(e, s) for (long long int i = e - 1; i >= s; i--)
#define pb push_back
#define ppb pop_back
#define eb emplace_back
using namespace std;

int main()
{
    //  Write your code here
    string s;
    cin >> s;
    string ans;

    unordered_map<char, int> hmap; // already initialized hash table

    for (int i = 0; i < int(s.length()); i++)
    {   
        hmap[s[i]]++;
    }
    lli oddCount = 0;
    char oddChar = '\0';
    // count odd occurrences
    for (auto x : hmap)
    {
        if (x.second % 2 != 0)
        {
            oddCount++;
            oddChar = x.first;
        }
    }
    if(oddCount>1 || (oddCount == 1 && s.length()%2==0)){
        ans = "NO SOLUTION";
        cout << ans << endl;
        return 0;
    }
    string firstHalf, secondHalf;
    for(auto x : hmap){
        string s(x.second/2,x.first);
        firstHalf = firstHalf + s;
        secondHalf = s + secondHalf;
    }
    if(s.length()%2!=0){
        ans = firstHalf + oddChar + secondHalf;
    }else{
        ans = firstHalf + secondHalf;
    }
    cout << ans << endl;

    return 0;
}