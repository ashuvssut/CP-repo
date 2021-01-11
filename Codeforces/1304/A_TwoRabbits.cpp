#include<iostream>
#include<algorithm>
#include<vector>
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
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    if ((y - x) % (b + a) == 0) {
        cout << (y - x) / (b + a) << endl;
    }
    else { cout << -1 << endl; }
    return 0;
}