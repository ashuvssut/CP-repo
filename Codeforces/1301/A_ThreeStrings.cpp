
#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
#define fi                      first
#define se                      second
#define pb                      push_back
#define endl                    '\n'
#define all(x)                  x.begin(),x.end()
#define pii                     pair<int,int>
#define fast                    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vi                      vector<int>
#define itall(it,x)             for( auto it=x.begin(); it!=x.end(); it++)
 
int solve();
 
int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i)
        solve();
 
}
 
int solve() {
    string a, b, res;
    cin >> a >> b >> res;
 
    int i = 0;
    int count = 0;
    while (a[count] != '\0')
        count++;
 
    do {
        if (a[i] == b[i] && b[i] != res[i]) {
            cout << "NO" << endl; return 0;
        }
        
        if (a[i] != b[i]) {
            if (b[i] == res[i]) {
                i++; continue;
            }
            else if (a[i] == res[i]) {
                i++; continue;
            }
            else { 
                cout << "NO" << endl;
                return 0;
            }
        }
        else if (a[i] == b[i]) {
            i++;
        }
 
    } while (i <= count);
 
    cout << "YES" << endl;
 
    return 0;
}