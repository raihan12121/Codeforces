#include<bits/stdc++.h>
using namespace std;

int main ()
{

    int k,n,w,s,i;
    cin>>k>>n>>w;

        int total=(k*(w*(w+1))/2);
       s=total-n;
       if(s<0)
       {
           s=0;
       }

    cout<<s;
    return 0;
}
