//

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
//https://codeforces.com/contest/1301/problem/B
}


int solve() {
    int n, in, sum=0, div=0;
    vi v,vg, ab;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> in;
        v.pb(in);
        if (in != -1) {
            vg.pb(in);
            sum = sum + in;
            div++;
            if ( i != 0) {
                if(v[i - 1] != -1)
                ab.pb(abs(v[i] - v[i - 1]));
            }
        }
        
    }
    if (sum != 0) {
        ab.pb(abs((sum / div) - *min_element(all(vg))));
    }
    else {
        cout << 0 << " " << 0 << endl; 
        return 0;
    }
    int m = *max_element(all(ab));
    cout << m << " "<<*min_element(all(vg))+ m << endl;
    
    return 0;
}