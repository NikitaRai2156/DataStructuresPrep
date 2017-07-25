#include<stdio.h>

void insertionSort(int arr[], int n) {
    int i, j;
    
    for(i=1;i<n;i++){
        
    }    
}

int main() {
     int arr[100], n, i;
     
     printf("Enter the length of the array: ");
     scanf("%d", &n);
     
     printf("\nEnter the elements of the array: ");
     for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
        
     insertionSort(arr, n);
     
     printf("\nThe sorted array is:\n");
     for(i=0;i<n;i++)
        printf("->%d", arr[i]);
}
