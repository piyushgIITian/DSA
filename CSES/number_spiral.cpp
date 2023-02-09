#include <iostream>
// Write your includes here!
// Have Fun Coding! <3
#define ll long long int

using namespace std;

int main()
{
    // Write your code here
    //  00 01 11 10 20 21 22 12 02 03 13 23 33 32 31 3
    int t;
    cin >> t;
    while (t--)
    {
        ll row, col;
        ll ans;
        cin >> row >> col;

        if (col > row)
        {
            if (col % 2 == 0)
            {
                ans = (col - 1) * (col - 1) + row;
            }
            else
            {
                ans = col * col + 1 - row;
            }
        }
        else
        {
            if (row % 2 == 0)
            {
                ans = row * row + 1 - col;
            }
            else
            {
                ans = (row - 1) * (row - 1) + col;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}