#include<stdio.h>

int binarySearch(int arr[], int l, int r, int num){
    int i, mid;
    if(r >= l){
        mid = l + (r - l)/2;

        if(arr[mid] == num)
            return mid;
        else if(arr[mid] > num)
            return binarySearch(arr, l, mid-1, num);
        else
            return binarySearch(arr, mid+1, r, num);
    }
    return -1;
}

int main() {
    int arr[100], n, i, num, index;

    printf("Enter length of array: ");
    scanf("%d", &n);

    printf("\nEnter elements of array: ");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

    printf("\nEnter the element to be searched: ");
    scanf("%d", &num);

    index = binarySearch(arr, 0, n-1, num);

    if(index == -1)
        printf("\nElement not found!");
    else
        printf("\nElement %d found at position %d", num, index);
}
