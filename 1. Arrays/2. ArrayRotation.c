#include<stdio.h>

void leftRotate(int arr[], int n, int d) {
    int temp, j, k;

    for(j=0;j<d;j++){
        temp = arr[0];
        for(k=0;k<n;k++){
            arr[k] = arr[k+1];
            arr[n] = temp;
        }
    }
}

void rightRotate(int arr[], int n, int d){
    int temp, j, k;

    for(j=0;j<d;j++){
        temp = arr[n-1];
        for(k=n-1;k>0;k--){
            arr[k] = arr[k-1];
            arr[0] = temp;
        }
    }
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
