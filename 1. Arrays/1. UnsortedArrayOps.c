#include<stdio.h>
int main() {
    int arr[100], n,;

    printf("Enter number of integers in array: ");
    scanf("%d", &n);

    printf("\nEnter the numbers: ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the correct choice: \n");
    while(1){
        printf("\n1. Search element\t2. Insert element\t3. Delete element\t4. Display\t5.Exit\n");
        scanf("%d", &choice);

        switch(choice){
            1:
                printf("\nEnter the element to be searched: ");
                scanf("%d", &num);
                index = searchArr(arr[0], n, num);
                if(index == -1){
                    printf("\nThis element is not in the array!\n");
                }
                else{
                    printf("\nElement %d found at position %d in the array!\n", num, index);
                }
                break;
            2:
                printf("\nEnter the element to be inserted: ");
                scanf("%d", &num);
                newLength = insertInArr(arr[0], n, num);
                if(newLength == n){
                    printf("\nItem could not be inserted!\n");
                }
                else {
                    printf("\Item successfully inserted!\n");
                }
                break;
            3:

            4:
                for(i=0;i<n;i++){
                    printf("\t%d", arr[i]);
                }
                break;
            5:
                printf("Thank you!\n");
                exit(0);
        }
    }
}
