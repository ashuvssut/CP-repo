#include <bits/stdc++.h>

using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define vi vector<int>
#define itall(it, x) for (auto it = x.begin(); it != x.end(); it++)

int solve();
int32_t main() {
    fast;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i) solve();
}
bool cmp(pair<int, int>& a, pair<int, int>& b) { return a.second < b.second; }
int solve() {
    int a;
    cin >> a;
    if(a == 1){
        int in;
        for (int i = 0; i < a; i++){
            cin >> in;
        } 
        cout << 0 << endl;
        return 0;
    }
    vi v, v1;
    map<int, int> counter;  //<number, frequency>
    for (int i = 0; i < a - 1; i++) {
        int in;
        cin >> in;
        if (i != 0 && v[i - 1] == in) {
            v.pb(in);
            continue;
        } else {
            v.pb(in);
            v1.pb(in);
            auto it = counter.find(in);
            if (it == counter.end()) {  // if 'in' not found in the map
                if (i == 0) {
                    counter.insert(mp(in, 1));
                } else {
                    counter.insert(mp(in, 2));
                }
            } else {
                it->second++;
            }
        }
    }
    cin >> a;
    if(v1.size() == 1 && a==v1[0]){
        cout << 0 << endl;
        return 0;
    }
    vector<pair<int, int> > A; 
    for (auto& it : counter) { 
        A.push_back(it); 
    }
    sort(A.begin(), A.end(), cmp);
    cout << A.begin()->second << endl;
    return 0;
}
