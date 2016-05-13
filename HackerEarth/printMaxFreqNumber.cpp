#include <stdio.h>
#include <cstdlib>

/* C implementation QuickSort */
#include<stdio.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void partition_fn(int *ar,int ar_size){
    int pivot = ar[0];    // pivot
    int low=1;
    int high=ar_size-1;
    while(low<high){
        if(ar[high] < pivot){
            if(ar[low] > pivot){
                swap(&ar[low],&ar[high]);
                low++;
                high--;
            }
        }
        else{
            high--;
        }
    }
    if(pivot > ar[low])
        swap(&ar[0],&ar[low]);
}

/*int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
    int j;
    for (j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}*/

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        //int pi = partition(arr, high);
        //quickSort(arr, low, pi - 1);
        //quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[] = {-13,68,-43,-71,-39,-10,40,-49,-19,-3,-70,-62,-76,-94,-73,64,72,-5,88,2,-63,92,-40,16,49,47,-86,-51,-9,-14,96,74,-22,-34,38,-12,6,63,19,-69,14,-90,-27,76,54,57,-87,-91,43,-92};
    int i,N = 50;

    /*int N,count1=0,max_count=0,element=-1,temp_count=0,i,max_element1=-1;
    scanf("%d",&N);
    count1 = N;
    int *arr = (int*) malloc(sizeof(int)*N);
     int* ptr = arr;

    while(count1--){
        int temp = 0;
        scanf("%d ",&temp);
        *(ptr++) = temp;
    }*/

    //process input
    /*qsort((void*)arr,N,sizeof(int),[](const void* a, const void* b)
        {
        int arg1 = *static_cast<const int*>(a);
        int arg2 = *static_cast<const int*>(b);

        if(arg1 < arg2) return -1;
        if(arg1 > arg2) return 1;
        return 0;
    });*/



    //quickSort(arr,0,N);
    partition_fn(arr,N);
    for(i=0;i<N;i++)
        printf("%d ",arr[i]);
    printf("\n");

    /*element = arr[0];
    for(i=0;i<N;i++){
        if(element == arr[i]){
           temp_count++;
        }
        else{
            if(temp_count > max_count){
                max_count = temp_count;
                max_element1 = element;
            }
             temp_count = 1;
             element = arr[i];
        }
    }

    printf("%d",max_element1);*/

//    printf("%0.6f",(float)1/2);

    return 0;
}
