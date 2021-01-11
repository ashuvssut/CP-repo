//https://www.hackerearth.com/challenges/college/codeit2k20/algorithm/6fc9e50980b94876bb75568f38440973/
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

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i)
        solve();

}

int solve() {
    int nd, in;
    set<int> v;
    cin >> nd;
    for (int i=0; i < nd; i++) {
        cin >> in;
        if (in < 0) {
            continue;
        }
        else {
            v.insert(in);
        }
    }
    int i = 0;
    while(nd>0) {
        auto it = v.begin();
        if (*it == i) {
            cout << *it<< " ";
            v.erase(v.begin());
            nd--;
        }
        else {
            cout << -1<<" ";
            nd--;
        }
        i++;
    }
    cout << endl;
    return 0;
}