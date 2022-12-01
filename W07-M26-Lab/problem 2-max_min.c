#include<stdio.h>
void find_max_min(int n, int arr[], int* p, int* q)
{
    *p = arr[0];
    *q = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i] > *p)
            *p = arr[i];
        if(arr[i] < *q)
            *q = arr[i];
    }
}
int main ()
{
    int ara[] = {12, 1, 23, 45, 6, 65, 7};
    int n = sizeof(ara)/sizeof(int);
    int maxx, minn;
    find_max_min(n, ara, &maxx, &minn);
    printf("Max is: %d, Min is: %d \n", maxx, minn);
    return 0;
}
