#include<stdio.h>
int searchArr(int arr[], int n, int num) {
    int i;
    for(i=0;i<n;i++){
        if(arr[i] == num)
            return i;
    }
    return -1;
}

int insertInArr(int arr[], int n, int num) {
    if(n >= 99){
        printf("\nItem cannot be inserted!");
        return n;
    }
    else {
        arr[n] = num;
        printf("\nItem inserted!");
        return n+1;
    }
}

int deleteFromArr(int arr[], int n, int num, int index) {
    int i;
    for(i=index;i<n-1;i++){
        arr[i] = arr[i+1];
    }
}

int main() {
    int arr[100], n, i, choice=0, index, num, result;

    printf("Enter number of integers in array: ");
    scanf("%d", &n);

    printf("\nEnter the numbers: ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the correct choice: \n");
    while(1){
        printf("\n1. Search element\n2. Insert element\n3. Delete element\n4. Display\n5.Exit\n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("\nEnter the element to be searched: ");
                scanf("%d", &num);
                index = searchArr(arr, n, num);
                if(index == -1){
                    printf("\nThis element is not in the array!\n");
                }
                else{
                    printf("\nElement %d found at position %d in the array!\n", num, index);
                }
                break;
            case 2:
                printf("\nEnter the element to be inserted: ");
                scanf("%d", &num);
                n = insertInArr(arr, n, num);
                break;
            case 3:
                printf("\nEnter element to be deleted: ");
                scanf("%d", &num);
                index = searchArr(arr, n, num);
                if(index == -1)
                    printf("\nElement not found in array and hence cannot be deleted!");
                else{
                    deleteFromArr(arr, n, num, index);
                    n--;
                    printf("\nElement %d successfully deleted from position %d in array!", num, index);
                }
                break;
            case 4:
                for(i=0;i<n;i++){
                    printf("\t%d", arr[i]);
                }
                break;
            case 5:
                printf("Thank you!\n");
                exit(0);
        }
    }
}
