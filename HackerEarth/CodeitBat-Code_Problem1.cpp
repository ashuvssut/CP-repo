//codeit Bat-code problem
#include<iostream>
#include<algorithm>
#include<set>
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
string s;
int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    cin >> s;
    for (int i = 1; i <= t; ++i)
        solve();

}

int solve() {
    string m; cin >> m;
    
    for (char c : m) {codeit
        if (c >= 'a' && c <= 'z') {
            
            cout << s[c-97];
        }
        else if (c >= 'A' && c <= 'Z') {
            char c1=s[c - 65];
            c1 = c1 - 32;

            cout << c1;
        }
        else {
            cout << c;
        }
    }
    cout<<endl;


    return 0;
}