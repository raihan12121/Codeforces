#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;
    int i,count=0;
    cin>>n;
    cin>>s;
    for(i=0; i<n-1; i++)
    {


        if(s[i]==s[i+1])
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
