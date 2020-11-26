#include<iostream>
using namespace std;

int main()
{
    int t,a, factor, remain;
    cin>>t;
    int c[t], k[t], o[t];
    for(int i=0; i<t; i++)
    {
        cin>>c[i]>>k[i];
        a= c[i]/k[i];
        remain= c[i]- (a* k[i]);
        if((k[i]/2)>remain)
        {
            factor= remain;
        }
        else{
            factor= (k[i]/2);
        }
        o[i]= k[i]*a+ factor;
    }


    for(int i=0; i<t; i++)
    {
        cout<<o[i]<<endl;

    }
    return 0;
}
