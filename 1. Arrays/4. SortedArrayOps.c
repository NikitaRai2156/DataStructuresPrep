#include<stdio.h>

int searchArr(int arr[], int l, int r, int num){
    int i, mid;
    if(r >= l){
        mid = l + (r - l)/2;

        if(arr[mid] == num)
            return mid;
        else if(arr[mid] > num)
            return searchArr(arr, l, mid-1, num);
        else
            return searchArr(arr, mid+1, r, num);
    }
    return -1;
}

int insertInArr(int arr[], int n, int num) {
    int i;
    n++;
    for(i=n-1;(i>=0 && arr[i] >= num);i--){
        arr[i+1] = arr[i];
    }
    arr[i+1] = num;
    return n;
}

int deleteFromArr(int arr[], int n, int num, int index) {
    int i;
    for(i=index;i<n;i++){
        arr[i] = arr[i+1];
    }
}

int main() {
    int arr[10], n, i, choice, index, num;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    printf("\nEnter the elements of the array: ");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

    printf("\n1.Search\n2.Insert\n3.Delete\n4.Display\n5.Exit");

    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nEnter element to be searched: ");
                scanf("%d", &num);
                index = searchArr(arr, 0, n, num);
                if(index == -1)
                    printf("\nElement not found!");
                else
                    printf("\nElement %d found at position %d", num, index);
                break;
            case 2:
                printf("\nEnter the element to be inserted: ");
                scanf("%d", &num);
                n = insertInArr(arr, n, num);
                break;
            case 3:
                printf("\nEnter the element you want to delete: ");
                scanf("%d", &num);
                index = searchArr(arr, 0, n, num);
                if(index == -1)
                    printf("\nThere is no such element in the array, enter a valid element!");
                else{
                    deleteFromArr(arr, n, num, index);
                    n--;
                    printf("\nElement %d successfully deleted from array!", num);
                }
                break;
            case 4:
                printf("\nThe array is: ");
                for(i=0;i<n;i++)
                    printf("->%d", arr[i]);
                break;
            case 5:
                exit(0);
       }
    }
}
