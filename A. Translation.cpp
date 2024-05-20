#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;


int main ()
{
    string s,t;
    int count=0;
    cin>>s;
   cin>>t;
    reverse(s.begin(),s.end());
    if(s==t)
    {
        cout<<"YES";
    }
    else if(s!=t)
    {
        cout<<"NO";
    }

    return 0;
}
