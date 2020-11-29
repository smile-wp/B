#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,cc=0,t;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            //int t;
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            cc++;
        }

    }
    cout<<cc;

}
