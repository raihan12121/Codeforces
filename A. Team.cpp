
#include<iostream>
using namespace std;
int main()
{
    int n,petya,vasya,tonya,number=0;
    cin>>n;
    for(int i=0; i<n;i++)
    {
        cin>>petya>>vasya>>tonya;
        if(petya+vasya+tonya>=2)
        {
            number +=1;
        }
    }
     cout<<number<<endl;


    return 0;
}
