//https://codeforces.com/contest/1270/problem/A
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int greatest(vector<int> a)
{
    sort(a.begin(), a.end());
    return a[a.size()-1];
}
int main()
{
    int t, n, k1, k2, x;
    cin >> t;
    vector<int> K1, K2;
    while(t--) {
        cin >> n >> k1 >> k2;
        
        for (int i = 0; i < k1; i++)
        {
            cin >> x;
            K1.push_back(x);
        }
        for (int j = 0; j < k2; j++)
        {
            cin >> x;
            K2.push_back(x);
        }

        int greater1 = greatest(K1);
        int greater2 = greatest(K2);

        (greater1 > greater2) ? cout << "YES" << endl : cout << "NO" << endl;
        K1.clear();
        K2.clear();
    }

    return 0;
}

/*
I/P
2

2 1 1
2
1

5 2 3
2 3
1 4 5


O/P
YES
NO

*/