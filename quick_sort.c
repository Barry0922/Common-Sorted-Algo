#include<stdio.h>
#include<stdlib.h>

int* quick_sort(int *arr, int n)
{
    if (n==1)
        return arr;
    int pivot=0, *left, *right, l=0, r = 0;
    left = (int*) (malloc(n*sizeof(int)));
    right = (int*) (malloc(n*sizeof(int)));
    
    pivot = *(arr+0);

    for(int i=1 ; i <n; i++)
    {
        if (*(arr+i) <= pivot)
            {
                *(left+l) = *(arr+i);
                l++;
                
            }
        if (*(arr+i) > pivot)
            {
                *(right+r) = *(arr+i);
                r++;
            }
    }
    
    if (l>0) {left = quick_sort(left, l);}

    if (r>0) {right = quick_sort(right, r);}
    
    for (int i = 0; i < n; i++)
    {
        if ( (i < l) && ( l > 0) )
        {
            *(arr+i) = *(left+i);
        }
        if (i == l)
        {
            *(arr+i) = pivot;
        }
        if ( (i>l) && (r>0) )
        {
            *(arr+i) = *(right+(i-l-1));
        }
        
    }
    
    return arr;
}

void show(int* arr, int n)
{

    printf("\n------------------------\n");
    for(int i=0 ; i < n ; i++)
    {
        printf(" %d ", *(arr+i));
    }
    printf("\n--------------yes----------\n");
}
int main(){

    int arr[] = {81,9,22,4,8,53,12};
    int *new;

    printf("sizeof arr[] = %d\n", sizeof(arr));
    show(arr, 7);

    new = quick_sort(arr, 7);
    show(new, 7);


    return 0;
}