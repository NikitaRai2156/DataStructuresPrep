#include<stdio.h>

void swap(int *j, int *k) {
    int temp;
    temp = *j;
    *j = *k;
    *k = temp;
}

void sort(int arr[], int n){
    int i, j;

    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}

int checkSum(int brr[], int n, int sum, int sumArr[]){
    int l, r, rows=0;
    l = 0;
    r = n-1;

    while(l<r){
        if(brr[l] + brr[r] == sum){
            rows++;
        }
        else if(brr[l] + brr[r] < sum){
            l++;
        }
        else{
            r--;
        }
    }
    return rows;
}

int main(){
    int arr[10], i, j, n, brr[10], sumArr[10], sum, rows=0;

    printf("Enter length of the array: ");
    scanf("%d", &n);

    printf("\nEnter the elements of the array: ");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

    printf("\nEnter the sum you want to check: ");
    scanf("%d", &sum);

    for(i=0;i<n;i++)
        brr[i] = arr[i];

    sort(brr, n);
    rows = checkSum(brr, n, sum, sumArr);

    printf("\nPairs with the given sum are: %d\n", rows);
    /*for(i=0;i<rows;i++){
            printf("%d\n", sumArr[i]);
        }*/
}
