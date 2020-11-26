https://codeforces.com/contest/1294/problem/A

#include<iostream>

using namespace std;

void Divide(int& a,int& b,int& c, int g, int n) {
    
    if (n == (3 * g - a - b - c)) {
        cout<<"YES"<<'\n';
    }
    else if (n > (3 * g - a - b - c)) {
        
      
        n = n - (3 * g - a - b - c);
        
        if (n % 3 == 0) {
            cout << "YES" << '\n';
        }

        else {
            cout << "NO" << '\n';
        }
    }
    else {
        cout << "NO" << '\n';
    }
    
}

int main()
{
    
    int t, in;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a>>b>>c>>n;

        if (a == b == c == 0 && n % 3 == 0) {
            cout << "YES" << '\n';
        }
        else {
            int great1 = (a < b) ? b : a;
            int great2 = (great1 > c) ? great1 : c;
            Divide(a, b, c, great2, n);
            
        }
    }
    return 0;
}


/*
i/p
5
5 3 2 8
100 101 102 105
3 2 1 100000000
10 20 15 14
101 101 101 3

o/p
YES
YES
NO
NO
YES




*/