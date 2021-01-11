#include <bits/stdc++.h>

using namespace std;

int main()
{

    int h, m,  t ;

    cin>>t;
    int min[t];

    for(int i=0; i<t; i++)
    {

        cin>>h>>m;
        min[i] = 1440-(60*h+ m);
    }

    for(int j=0; j<t; j++)
    {

        cout <<  min[j]<< endl;
    }
    return 0;
}
