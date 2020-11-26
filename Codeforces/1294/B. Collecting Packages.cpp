#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

void path(vector<pair<int, int>> v) {
    vector<pair<int, int>> vec;
    for (int c = 1; c < v.size(); c++) {
        vec.push_back(make_pair(v[c].first - v[c - 1].first, v[c].second - v[c - 1].second));
        
    }
    for (int c = 0; c < vec.size(); c++) {
        for (int i = 0; i < vec[c].first; i++) {
            cout << "R";
        }
        for (int j = 0; j < vec[c].second; j++) {
            cout << "U";
        }
    }
    cout << '\n';

}

void check(vector<pair<int, int>> v) {
    
    for (int c = 1; c < v.size(); c++) {
        if (v[c - 1].second > v[c].second) {
            cout << "NO" << '\n';
            break;
        }
        
        else if (c == v.size()-1) {
            cout << "YES" << '\n';
            path(v);
        }
    }

}

int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        int  n;
        cin >>n;
        vector<int> i(1,0),j(1, 0);
        vector<pair<int, int>> v;
        for (int c = 1; c <= n; c++) {
            int in;
            cin >> in;
            i.push_back(in);

            cin >> in;
            j.push_back(in);            
        }

        for (int c = 0; c < i.size(); c++)
            v.push_back(make_pair(i[c], j[c]));
        
        sort(v.begin(), v.end());

        check(v);
    }
    return 0;
}



/*
1
5
1 3
1 2
3 3
5 5
4 3
*/

/*
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

void path(vector<pair<int, int>> v, int n) {
    
    vector<pair<int, int>> vec;
    for (int c = 1; c < n; c++) {
        
    }
}

int main() {
    vector<pair<int, int>> v = { {0,0} ,{1,2}, {1,3},{3,3}, {4,3}, {5,5} };
    int n;
    path(v, n);
}
*/