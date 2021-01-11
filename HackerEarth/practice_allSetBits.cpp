//Custom Problem(not available in HackerEarth)

#include<vector>
#include<iostream>
#include<sstream>
using namespace std;

void print(int x) {
    int dec = 0;
    stringstream s;
    s << x;
    string str = s.str();
    dec = stoi(str, 0, 2);
    cout << dec << "\n";
}

void out(int cnt) {
    int x = 0;
    while (cnt--) {
        x = x * 10 + 1;
    }
    print(x);

}

void countSet(int x) {

    int cnt = 0;
    while (x) {
        x = x & (x - 1);
        cnt++;
    }
    out(cnt);
}

int main()
{

    int t, in;
    cin >> t;
    while (t--)
    {
        cin >> in;
        countSet(in);
    }

}
