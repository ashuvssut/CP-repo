//https://codeforces.com/contest/1341/problem/B

#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
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
bool sortbyfirst(const pair<int, int> & a,
    const pair<int, int> & b)
{
    return (a.first > b.first);
}
//few Globals for easy setting up of our adder function
int n, k, C;
vi v = { 0 };
int adder() {
    int sum = 0;
    for (int i = C; i <= C + k - 3; i++) {
        sum += v[i];
    }
    return sum;
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i)
        solve();
}



int solve() {
    C = 0; v = { 0 };
    int in1, in2, in3;
    cin >> n >> k >> in1 >> in2;
    in1 = 0;
   
    //making an array to represent the mountain array. peak are denoted as 1 and non-peaks as 0
    for (int i = 0; i < n-2; i++)
    {
        
        cin >> in3;
        if (in2>in1 && in2>in3)
        {
            v.push_back(1);
        }
        else {
            v.push_back(0);
        }

        in1 = in2;
        in2 = in3;
    }
    v.push_back(0);
    //array is now made
    //MOVE TO NEXT STEP
    
    //select the segment of the array of the door size. now its time to throw and break the door into pieces
    vector<pair<int, int>> Vpeak;
    for (C = 1; C <n-k+2; C++)
    {
        
        int peaks = adder();/*accumulate(v.begin() + C, v.begin() + C + k - 1, 0);*/
        Vpeak.pb(make_pair(peaks, C));
    }

    //to find which Vpeak element has max no of peaks just do sort
    sort(Vpeak.begin(), Vpeak.end(), sortbyfirst);

    cout <<  Vpeak[0].first + 1 << " " << Vpeak[0].second <<  endl;

    return 0;
}