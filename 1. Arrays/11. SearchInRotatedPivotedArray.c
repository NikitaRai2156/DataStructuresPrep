#include<stdio.h>

int searchPivoted(int arr[], int l, int h, int num){
    int i, mid;
    if(l>h)
        return -1;
    mid = (l+h)/2;

    if(arr[mid] == num)
        return mid;
    if(arr[mid] >= arr[l]){
        if(num >= arr[l] && num <= arr[mid])
            return searchPivoted(arr, l, mid-1, num);
        return searchPivoted(arr, mid+1, h, num);
    }
    if(num >= arr[mid] && num <= arr[h])
        return searchPivoted(arr, mid+1, h, num);
    return searchPivoted(arr, l, mid-1, num);
}

int main(){
    int arr[10], i, n, res, num;

    printf("Enter length of array: ");
    scanf("%d", &n);

    printf("\nEnter elements of the array: \n");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    printf("\nEnter element to be searched for: ");
    scanf("%d", &num);

    res = searchPivoted(arr, 0, n, num);
    printf("\nElement found at: %d", res);
}
