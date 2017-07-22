#include<stdio.h>

void reverse(int arr[], int start, int end) {
    int temp;
    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void leftRotate(int arr[], int n, int d) {
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}

void rightRotate(int arr[], int n, int d){
    reverse(arr, 0, n-1);
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
}

int main() {
    int arr[100], i, n, d, choice;

    printf("Enter length of array: ");
    scanf("%d", &n);

    printf("\nEnter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("\nEnter number of elements to be rotated: ");
    scanf("%d", &d);

    printf("\n1. Left Rotation\t2. Right Rotation\t3. Display\t4. Exit:  ");

    while(1){
        printf("\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                leftRotate(arr, n, d);
                break;
            case 2:
                rightRotate(arr, n, d);
                break;
            case 3:
                for(i=0;i<n;i++){
                    printf("->%d", arr[i]);
                }
                break;
            case 4:
                exit(0);
        }
    }
}
