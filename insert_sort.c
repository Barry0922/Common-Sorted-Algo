#include<stdio.h>

void insert_sort(int *arr, int n)
{
    int total_n =0, tem=0 , j=0; 
    for (int i =0 ; i <n ; i++)
    {
        for (j= 0 ; j<i ; j++)
        {
            total_n ++;
            if (*(arr+j) > *(arr+i))
            {
                break;
            }
            
        }
        if (j==i) { j = 0;}
        tem = *(arr+i);

        for (int k = i ; k >j; k--)
        {
            *(arr+k) = *(arr+k-1);
        }

        *(arr+j) = tem;
    }
    printf(" Big O = %d\n", total_n);
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

    insert_sort(arr, sizeof(arr)/sizeof(int));

    show(arr, sizeof(arr)/sizeof(int) );

    return 0;
}