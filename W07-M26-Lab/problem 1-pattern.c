//Print pattern with function
#include<stdio.h>
void print_pattern(int n);
int main ()
{
    for(int i=1; i<=5; i++)
        print_pattern(i);
    return 0;
}

void print_pattern(int n)
{
    for(int i=0; i<n; i++)
    {
        printf("#");
    }
    printf("\n");
}
