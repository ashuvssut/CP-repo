#include<iostream>
using namespace std;

int main()
{
    long long int t;
    cin>> t;
    int x[t];
    for(int i=0; i< t; i++)
    {
        long long int b, d, a, u;

        cin>>b>>d>>a>>u;

        long long int p= (float)(2*(b+d)/(float)a)- ((float)(b/u)*(b/u));
        if(p<=0)
            x[i]=0;
        else
            x[i]=1;
    }
    for(int i=0; i< t; i++)
    {

        if(x[i]==0)
            cout<<"Tiger"<<endl;
        else if (x[i]==1)
            cout<<"Bolt"<<endl;
    }
}
