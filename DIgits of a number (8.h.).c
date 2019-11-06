//We assume the number has ten digits or less
#include<stdio.h>
int main()
{
    int n=1,a,b=0,i=1000000000,product=1,j=1,number_of_digits=0,last_digit,B;
    while (n<=1000000000)
    {
    b=0;i=1000000000;product=1;j=1;number_of_digits=0;
    a=n;
    while (b==0)
    {
        b=a/i;
        if (b!=0)
        {
            break;
        }
        a=a%i;
        i=i/10;
    }
    for (;i>=1;i=i/10)
    {
        b=a/i;
        a=a%i;
        number_of_digits=number_of_digits+1;

    }
    for (i=1;i<number_of_digits;i++)
    {
        j=j*10;
    }
    last_digit=n%10;
    B=n/10+(last_digit*j);
    if (B==4*n)
    {
        printf("\nA :%d",n);
        printf(" ,B :%d",B);
        break;
    }
    n=n+1;
    }
}
