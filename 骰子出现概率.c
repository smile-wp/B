#include<stdio.h>
int main()
{
    int i,a[6]={0},k;
    float p;
    for(i=0;i<6000;i++)
    {
        k=rand()%6+1;
       a[k-1]++;

    }
    for(i=0;i<6;i++)
    {
    p=a[i]/6000.0;
    printf("%d   出现了%d次，出现的概率：%.2f\n",i+1,a[i],p);
    }
}
