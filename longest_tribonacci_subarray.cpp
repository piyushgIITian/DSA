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

 
// A utility function that returns
// true if x is perfect square
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s * s == x);
}
 
bool isTribonacci(int n)
{
    if (n == 0 || n == 1 ) {return true;}
    int a = 0, b = 1, c = 1, d = a+b+c;
    while(d < n)
    {
        a = b; b = c; c = d; d = a+b+c;
    }
    if (d == n) {return true;} return false;
}

int contiguousFibonacciNumber(int arr[], int n)
{
 
    int current_length = 0;
    int max_length = -9999;
 
    // Traverse the array arr[]
    for (int i = 0; i < n; i++) {
 
        // Check if arr[i] is a Fibonacci number
        if(isTribonacci(arr[i])) {
            current_length++;
        }
        else{
           current_length = 0;
        }
        cout << current_length << "   "<<endl; 
        // Stores the maximum length of the
        // Fibonacci number subarray
        max_length = max(max_length, current_length);
    }
   
    // Finally, return the maximum length
    return max_length;
}
int main()
{
 
    // Given Input
    int arr[] = { 0,1,1,105,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    
    // Function Call
    cout << contiguousFibonacciNumber(arr, n);
 
    return 0;
}