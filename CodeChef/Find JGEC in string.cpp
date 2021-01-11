//https://www.codechef.com/AABH2020/problems/JGEC

#include<vector>
#include<iostream>
#include<iterator>
using namespace std;

int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        int  n;
        cin >>n;
        vector<char> s;
       
        for (int i = 0; i < n; i++) {
            char c;
            cin >> c;
            s.push_back(c);
        }
       
        int cnt = 0;
        if (n >= 4) {
            for (int i = 3; i < n; i++) {
                if (s.at(i - 3) == 'J' && s.at(i - 2) == 'G' && s.at(i - 1) == 'E' && s.at(i) == 'C') {
                    cnt++;
                }
            }
            cout << cnt << '\n';
        }
        else {
            cout << '0' << '\n';
        }

    }
    return 0;
}

