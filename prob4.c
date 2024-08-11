//6. swap the first and last values in an integer array without a temporary variable 
#include <stdio.h>
void readArray(int arr[],int n){
    printf("Enter the array elements  : \n");
    for (int i = 0; i < n; i++)
    {
     scanf("%d",&arr[i]);
    }
    
}
void displayArray(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void swapArray(int arr[],int n){
    arr[0] = arr[0]+arr[n-1];
    arr[n-1]=arr[0]-arr[n-1];
    arr[0]=arr[0]-arr[n-1];

}
int main(){
    int n ;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    int arr[n];
    readArray(arr,n);
    printf("The array elements before swapping first and last index values \n");
    displayArray(arr,n);
    swapArray(arr,n);
    printf("\n");
    printf("The array elements before swapping first and last index values \n");
    displayArray(arr,n);
}