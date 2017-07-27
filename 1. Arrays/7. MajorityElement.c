#include<stdio.h>

void printMajorityElement(int arr[], int n){
    int cand = findCandidate(arr, n);

    if(isMajority(arr, n, cand))
        printf("\nMajority Element: %d", cand);
    else
        printf("\nNo Majority Element");
}

int findCandidate(int arr[], int n){
    int i, count, maj_index;

    maj_index = 0;
    count = 1;

    for(i=1;i<n;i++){
        if(arr[i] == arr[maj_index])
            count++;
        else
            count--;
        if(count == 0){
            maj_index = i;
            count = 1;
        }
    }
    return arr[maj_index];
}

int isMajority(int arr[], int n, int cand) {
    int i, count=0;

    for(i=0;i<n;i++){
        if(arr[i] == cand)
            count++;
    }
    if(count > (n/2))
        return 1;
    else
        return 0;
}

int main(){
    int arr[10], i, n;
    printf("Enter length of array: ");
    scanf("%d", &n);

    printf("\nEnter elements of the array: ");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

    printMajorityElement(arr, n);

}
