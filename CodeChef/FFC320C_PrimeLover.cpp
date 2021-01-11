//https://www.codechef.com/FFC32020/problems/FFC320C

#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>

using namespace std;

int isprime(int N) {
    int count = 0;
    if  (!(N & 1) && N != 2)
        return 0;
    for (int i = 3; i<= sqrt(N); i += 2) {
        if (!(N % i)) 
          return 0;
    }
    return 1;
}


int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        vector<pair<int, int>> v;
        vector<int> v1;
        int n, h;
        bool p;
        cin >> n;
        for (int i = 0; i < n; i++) {

            cin >> h;
            v.push_back(make_pair(i+1,h));
        }

        do {
            for (auto x = 0;x<=v.size(); x++) {
                if (v.size() == 1) { v1.push_back(v[0].first); v.clear(); break; }
                p = isprime(v[x].second);
                if (p) {
                    v1.push_back(v[x].first);
                    
                    v.erase(v.begin() + x); //////////////
                    v.shrink_to_fit();
                }
            }
            for (auto it = v.begin(); it != v.end(); it++) {
                v[it - v.begin()].second += 1;
            }
        } while (v.size());
        
        for (int c : v1) {
            cout << c << " ";
        }
        
        cout << endl;
    }

    return 0;
}