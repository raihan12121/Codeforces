#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,s,count1=0,count2=0;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<=s)
        {
            count1++;
        }
        else
        {
            count2+=2;
        }
    }
   int f=count1+count2;
   cout<<f;
    return 0;
}
