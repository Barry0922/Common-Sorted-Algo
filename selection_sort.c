#include<stdio.h>

void bubble_sort(int *arr, int n)
{
    int total_n =0, min, m_indx;

    for (int i = 0 ; i < n ; i ++)
    {   
        min = *(arr+i);
        m_indx = i;

        for (int j = i+1 ; j <n ; j ++)
        {
            if (*(arr+j) < min) { 
                min = *(arr+j);
                m_indx = j;
                }
            total_n++;
        }
        *(arr+m_indx) = *(arr+i);
        *(arr+i) = min;

    }
    printf(" Big O = %d \n", total_n);
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