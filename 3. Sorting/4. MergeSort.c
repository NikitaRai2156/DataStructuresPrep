#include<stdio.h>
int main() {
    int arr[100], n, i;
    
    printf("Enter length of the array: ");
    scanf("%d", &n);
    
    printf("\nEnter elements of the array: ");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
        
    mergeSort(arr, n);
    
    printf("\nThe sorted array is: \n");
    for(i=0;<n;i++)
        printf("->%d", arr[i]);
}
