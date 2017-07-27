#include<stdio.h>

int findOddElement(int arr[], int n){
    int i, res = 0;

    for(i=0;i<n;i++){
        res = res ^ arr[i];
    }
    return res;
}

int main(){
    int arr[10], i, n, res;

    printf("Enter length of array: ");
    scanf("%d", &n);

    printf("\nEnter elements of the array (with only one item occurring odd number of times): \n");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

    res = findOddElement(arr, n);
    printf("\nOdd ocuurring element: %d", res);
}
