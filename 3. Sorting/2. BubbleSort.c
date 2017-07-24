#include<stdio.h>

void swap(int *j, int *k) {
    int temp;
    temp = *j;
    *j = *k;
    *k = temp;
}

void bubbleSort(int arr[], int n) {
    int i, j;

    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}

int main() {
    int arr[100], n, i;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    printf("\nEnter the elements of the array: ");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

    bubbleSort(arr, n);

    printf("\nThe sorted array is: \n");
    for(i=0;i<n;i++)
        printf("->%d", arr[i]);
}
