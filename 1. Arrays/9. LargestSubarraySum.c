#include<stdio.h>

int findLargestSum(int arr[], int n){
    int max_till_now=0, max_end=0, i, start=0, end=0, s=0;

    for(i=0;i<n;i++){
        max_end += arr[i];

        if(max_till_now < max_end){
            max_till_now = max_end;
            start = s;
            end = i;
        }
        if(max_end < 0){
            max_end = 0;
            s = i+1;
        }
    }
    printf("\nStarting index: %d", start);
    printf("\nLast index: %d", end);
    return max_till_now;
}

int main(){
    int arr[10], i, n, res;

    printf("Enter length of array: ");
    scanf("%d", &n);

    printf("\nEnter elements of the array: \n");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

    res = findLargestSum(arr, n);
    printf("\nLargest Subarray Sum: %d", res);
}
