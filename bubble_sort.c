#include<stdio.h>

void bubble_sort(int *arr, int n)
{
    int total_n =0; 

    while (n>0)
    {
        int i =0, tem=0;

        while (i < (n-1) )
        {
            if ( *(arr+i+1) < *(arr+i))
                {
                tem = *(arr+i);
                *(arr+i) = *(arr+i+1);
                *(arr+i+1) = tem;
                }

            i++;
            total_n ++;
        }
        n  = n-1;

    }
    printf(" Big O = %d, which euqal to [ (n-1)+(n-2)+(n-3)...+1 ] = n^2 \n", total_n);
}

void show(int arr[], int n)
{

    printf("\n------------------------\n");
    for(int i=0 ; i < n ; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n------------------------\n");
}
int main(){

    int arr[] = {81,9,22,4,8,58,14,53,12};

    printf("sizeof arr[] = %d\n", sizeof(arr));

    show(arr, sizeof(arr)/sizeof(int) );

    bubble_sort(arr, sizeof(arr)/sizeof(int));

    show(arr, sizeof(arr)/sizeof(int) );

    return 0;
}