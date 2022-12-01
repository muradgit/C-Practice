//Farhan's Number- two function
#include<stdio.h>
int sum_of_digits(int a)
{
    int summ=0;
    while(a>0)
    {
        summ = summ + (a%10);
        a = a/10;
    }
    return summ;
}

int is_prime(int a)
{
    int i;
    for(i=0; i<a; i++)
    {
        if(a%2==0)
            return 0;
    }
    return 1;
}

int main ()
{
    int n;
    scanf("%d", &n);
    if(is_prime(sum_of_digits(n))==1)
        printf("Farhan's Number");
    else
        printf("No");
    return 0;
}
