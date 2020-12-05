#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int la=a.length(),lb=b.length();
    if(la<lb)
    {
        for(int i=1;i=lb-la;i++)
            a='0'+a;
    }
    else
    {
        for(int i=1;i<la-lb;i++)
            b='0'+b;
    }
    la=a.length();
    string str;
    int jw=0;
    int temp;
    for(int i=la-1;i>=0;i--)
    {
        temp=a[i]-'0'+b[i]-'0'+jw;
        jw=temp/10;
        temp%=10;
        str=char(temp+'0')+str;
    }
    if(jw!=0)
        str=char(jw+'0')+str;
    cout<<str;
}
