#include<stdio.h>

void reverseArr(int arr[], int n) {
    int temp, start, end;

    start = 0;
    end = n-1;

    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[10], i, n;

    printf("Enter length of the array: ");
    scanf("%d", &n);

    printf("\nEnter the elements of the array: ");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

    reverseArr(arr, n);

    printf("\nThe reversed array is: ");
    for(i=0;i<n;i++)
        printf("->%d", arr[i]);
}
