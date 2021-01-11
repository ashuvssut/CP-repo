//https://www.hackerearth.com/challenges/college/codeit2k20/algorithm/c9722b79e41946e7867d0d36f2884335/

#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
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


    return 0;
}

bool compare(const pair<char, int>& i, const pair<char, int>& j)
{
    return i.second > j.second;
}

int solve() {
    vector<pair<char, int>> v;
    string s;
    cin >> s;
    sort(all(s));
    
    for (int i = 0; i < s.size(); ){
        int n = 0;
        auto it = upper_bound(all(s), s[i]);
        auto it1 = lower_bound(all(s), s[i]);
        n = it - it1;
        v.pb(make_pair(s[i], n));
        i = i + n;
    }

    sort(v.begin(), v.end(), compare);

    for (auto x : v) {
        for (int i = 0; i < x.second; i++) {
            cout << x.first<<endl
        }
    }
    
    
    return 0;
}