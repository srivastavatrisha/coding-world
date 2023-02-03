#include <stdio.h>
#include <math.h>
int main()
{
    long long int n;
    printf("enter no. of cards:");
    scanf("%lld",&n);
    if(n/1000000000000==4||n/1000000000000000==4)
    {
        printf("visa");
    }
    else if(n/100000000000000==51||n/100000000000000==52||n/100000000000000==53||n/100000000000000==54||n/100000000000000==55)
    {
        printf("mastercard");
    }
    else
    {
        printf("invalid otherwise");
    }
}
