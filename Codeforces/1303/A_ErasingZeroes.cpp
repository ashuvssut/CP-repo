//https://codeforces.com/contest/1300/problem/B

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

void solve();

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i)
        solve();

}

void solve() {
    string s;
    cin >> s;
    int z = 0, o = 0, fz=0, lz=0;

    for (char c : s) {
        if (c == '0') {
            z++;
        }
        else { o++; }
    }

    for (char c : s) {
        if (c == '0') {
            fz++; 
        }
        else { break; }
    }

    for (char c : s) {
        if (o == 0) { break; }
        if (c == '0') {
            lz++; 
        }
        else { lz = 0; }
    }

    cout << z - (lz + fz) << endl;
}