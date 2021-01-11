#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n][n];
    for(int i=0; i<=n-1;  i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            if(i==0 || j==0)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=a[i-1][j]+a[i][j-1];
            }
            cout<<a[n][n]<< endl;
        }
    }
    cout << a[n][n]<< endl;
    return 0;
}
