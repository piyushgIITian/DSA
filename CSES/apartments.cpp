// Author: Piyush Gautam, IIT Kharagpur
// Contact: mailto:piyushgautamtg@gmail.com
// Have Fun Coding! <3<3

/********   All Required Header Files ********/

#include <iostream>
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
#define sp << " " <<

/* FUNCTIONS */
#define fr(s, e) for (long long int i = s; i < e; i++)
#define cf(s, e) for (long long int i = s; i <= e; i++)
#define rf(e, s) for (long long int i = e - 1; i >= s; i--)
#define pb push_back
#define ppb pop_back
#define eb emplace_back
using namespace std;

/*
 * n - applicants  m - free apartments
 * a1, a2, a3 ... an - desired apparment size
 * k - maximum allowed difference   accepted size == (a1-k,a1+k)
 * b1, b2, b3 ... bn - actual aparment size
 * return no. of applicants who can get appartment.
 */
int main()
{
    //  Write your code here
    lli n, m, k;
    cin >> n >> m >> k;
    vector<lli> arr1;
    vector<lli> arr2;
    fr(0, n)
    {
        lli temp;
        cin >> temp;
        arr1.pb(temp);
    }
    fr(0, m)
    {
        lli temp;
        cin >> temp;
        arr2.pb(temp);
    }
    lli count = 0;
    bool flag = true;
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    // fr(0, n)
    // {
    //     flag = true;
    //     for (int j = 0; j < m && flag; j++)
    //     {
    //         if (arr2[j > 0])
    //         {
    //             if (arr1[i] - k <= arr2[j] && arr2[j] <= arr1[i] + k)
    //             {
    //                 arr2[j] = -1;
    //                 count++;
    //                 flag = false;
    //             }
    //         }
    //     }
    // }
    lli i=0,j=0;
    while(i<n && j<m){
        if(abs(arr1[i]-arr2[j])<=k){
            count++;
            ++i;
            ++j;
        }
        else{
            if(arr1[i]-arr2[j]>k){
                ++j;
            }else{
                ++i;
            }
        }
    }
    cout << count << endl;
    return 0;
}