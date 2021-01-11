//https://www.codechef.com/FFC32020/problems/FFC320B

#include<algorithm>
#include<iostream>

using namespace std;

int fun(int i) {
    int count=2;

    for (int j = 2; j < i; j++) {
        if (i % j == 0) {
            count++;
        }
    }

    return count;
}
int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        int r, l, R, L, c, even = 0, count = 0;
        cin >> l>>r;
        L = l; R = r;
        l = max(l, r);
        r = min(L, R);

        for (int i = r; i <= l; i++) {
            if (i == 1) { i++; }
            c = fun(i);
            if (c % 2 == 0) {
                count++;
            }
        }
        
        cout << count << endl;
    }
    return 0;
}

