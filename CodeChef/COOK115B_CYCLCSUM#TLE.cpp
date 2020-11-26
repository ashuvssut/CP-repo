https://www.codechef.com/COOK115B/problems/CYCLCSUM

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
    vector<int> v;
    int n, in, res = 0, ans=0, f;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> in;
        v.pb(in);
    }

    for (int i = 0; i < n; i++) {//machine
        for (auto it = v.begin(); it != v.end(); it++) {
            if (*it > 0 && it != v.end()) {
                res += *it;
            }
            
            else if (*it < 0 && (it != v.end())) {
                if (res > ans) {
                    ans = res;
                    res = 0;
                }

            }
            
        }
        if (res > ans) {
            ans = res;
            res = 0;
        }
        cout << ans << endl;
        ans = 0;
        res = 0;
        f = v.front();
        v.erase(v.begin());
        v.pb(f);
    }
    return 0;

}