#include<conio.h>
#include<stdio.h>
void f_1();
void main()
{
    f_1();
}
void f_1()
{
    int n,i,flag=1;
    printf("enter the number");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d is a composite number\n",n);
    }
    else
    {
        printf("%d is a prime number\n",n);
    }
}
