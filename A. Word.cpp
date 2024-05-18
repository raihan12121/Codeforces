#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int uppercase=0;
    int lowercase=0;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
        {
            uppercase++;
        }
        else if(islower(s[i]))
        {
            lowercase++;
        }
    }
    if(uppercase>lowercase)
    {
        for(int i=0; i<s.size();i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    else
    {

        for(int i=0; i<s.size();i++)

    {
        s[i]=tolower(s[i]);

    }
    }
    cout<<s;


    return 0;
}
