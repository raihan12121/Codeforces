
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count1=0,count2=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0; i<n;i++)
    {
        if(s[i]=='A')
        {
            count1++;
        }
        else if(s[i]=='D')
        {
            count2++;
        }

    }
    if(count1>count2)
    {
        cout<<"Anton";
    }
    else if(count1<count2)
    {
        cout<<"Danik"<<endl;
    }
    else if(count1==count2)
    {
        cout<<"Friendship";
    }

    return 0;
}
