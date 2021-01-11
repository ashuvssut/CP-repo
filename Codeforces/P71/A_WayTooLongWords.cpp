// @ashuvssut

#include<iostream>
#include<string.h>
using namespace std;

int solve();

int main(){
    int t; cin>>t;
    for(int i=0; i<t; i++){
        solve();
    }
}

int solve(){
    string str; cin>>str;
    
    if(str.length()>10){
        cout << str[0] << (str.length() - 2) << str[str.length()-1] << endl;
    }
    else{
        cout << str << endl;
    }

    return 0;
}