#include<stdio.h>
int main()
{
    int arr[25],i,size;

    int pn=0,nn=0,en=0,on=0;
    printf("input size");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            pn++;
        }
        if(arr[i]%2==0)
        {
            en++;
        }
        if(arr[i]%2!=0)
        {
            on++;
        }
        if(arr[i]<0)
        {
            nn++;
        }
    }
    printf("\n positive number=%d\n negative number=%d\n even number=%d\n odd number=%d",pn,nn,en,on);
    printf("\n this program is prepared by 22ce007-Naisargi");
}
