//https://www.codechef.com/FEB20B/problems/SNUG_FIT

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

void solve(){
    vi v1, v2;
    int n, in;
    cin >> n;
    

    for (int i = 0; i < n;i++) {
        cin >> in;
        v1.pb(in);
    }

    for (int i = 0; i < n; i++) {
        cin >> in;
        v2.pb(in);
    }

    sort(all(v1));
    sort(all(v2));
   
    int x, b, sum=0;
    
    while( v1.size() > 0) {
    
        auto i1 = lower_bound(v1.begin(), v1.end(), v2.front());
        auto i2 = upper_bound(v1.begin(), v1.end(), v2.front());
        
        if (i1 == v1.end()) {
            x = *(i1 - 1);
        }
        else {
            x = *i1;
        }
        if (i1 == i2 && x != v1.front()){//number v2.front() is not there in v1 & num pointed by i1 is not the first element of v1
            b = (abs(v2.front() - *(--i1)) <= abs(x - v2.front())) ? *(i1 - 1) : x;
         
        }
        else if (i1 == i2) {//x is the first element of v1
            b = x;
        }
        else if (i1 != i2 && x != v1.front()) {
            b = *(i1 - 1);
        }
        else {
            b = x;
        }
        

        
        int first = (v2.front() > b) ? b : v2.front();

        sum = sum + first;
        auto it1 = find(all(v2), v2.front());
        v2.erase(it1); 
        auto it2 = find(all(v1), b);
        v1.erase(it2); 
    }
    cout << sum << endl;


}