#include<stdio.h>

void swap(int *min, int *i) {
    int temp;
    temp = *min;
    *min = *i;
    *i = temp;
}

void selectionSort(int arr[], int n) {
    int i, j, min;

    for(i=0;i<n;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(arr[j] < arr[min])
                min = j;
        }
        swap(&arr[min], &arr[i]);
    }
}

int main() {
     int arr[100], n, i;

     printf("Enter length of array: ");
     scanf("%d", &n);

     printf("\nEnter elements of array: ");
     for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

     selectionSort(arr, n);

     printf("\nSorted array is: ");
     for(i=0;i<n;i++)
        printf("->%d", arr[i]);
}
