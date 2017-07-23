#include<stdio.h>

int findArr(int arr[], int n, int num) {
    int i;
    for(i=0;i<n;i++){
        if(arr[i] == num)
            return i;
    }
    return -1;
}

int main() {
    int arr[100], n, i, num, index;

    printf("Enter length of array: ");
    scanf("%d", &n);

    printf("\nEnter elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to be found: ");
    scanf("%d", &num);

    index = findArr(arr, n, num);

    if(index == -1)
        printf("\nElement not found!");
    else {
        printf("\nElement %d found at %d position", num, index);
    }
}
