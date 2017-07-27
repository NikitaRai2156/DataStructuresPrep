#include<stdio.h>

findMissingElementMethod1(int arr[], int n){
    int sum, i, sumArr = 0, missing;
    sum = ((n+1)*(n+2))/2;
    for(i=0;i<n;i++){
        sumArr = sumArr + arr[i];
    }
    missing = sum - sumArr;
    return missing;
}

findMissingElementMethod2(int arr[], int n){
    int x1=arr[0], x2=1, i;

    for(i=1;i<n;i++){
        x1 = x1^arr[i];
    }
    for(i=2;i<=n+1;i++){
        x2 = x2^i;
    }
    return (x1^x2);
}

int main(){
    int arr[10], i, n, res1, res2;

    printf("Enter length of array: ");
    scanf("%d", &n);

    printf("\nEnter elements of the array: \n");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

    res1 = findMissingElementMethod1(arr, n);
    res2 = findMissingElementMethod2(arr, n);

    printf("\nMethod 1 Missing Element: %d", res1);
    printf("\nMethod 2 Missing Element: %d", res2);
}
