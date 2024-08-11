// 7. search a number in a sorted integer array 
#include <stdio.h>
#include <stdbool.h>
void readArray(int arr[],int n){
    printf("Enter the array elements  : \n");
    for (int i = 0; i < n; i++)
    {
     scanf("%d",&arr[i]);
    }
    
}
void displayArray(int arr[],int n){
        printf("the array elements  : \n");

    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void bubbleSort(int arr[],int n){
    int temp;
    
    for (int i = 0; i < n; i++)
    {
        bool isSwapped = false ;

       for (int j = 0; j < n-i-1; j++)
       {
         if (arr[j] >arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1]=temp;
            isSwapped = true;
         }
       }
       if(!isSwapped){
         break;
       }
       
    }
    
}
void binarySearch(int arr[],int n,int key){
     int low=0,high=n-1,mid ;
     while (low<=high)
     {
             mid = low+ (high-low)/2;
        if (arr[mid] == key){
            printf("The element found at position %d",mid+1);
            return ;
        }
        else if (arr[mid]<key) {
            low = mid+1;
        }
        else{
            high = mid-1;
        }
     }
         printf("Element %d not found in the array.\n", key);




}
int main(){
    int n ;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    int arr[n];
    readArray(arr,n);
    displayArray(arr,n);
        printf("\n");

    bubbleSort(arr,n);
        printf("Array after sorting\n");

    displayArray(arr,n);
    printf("\n");
    int key;
    printf("Enter the value you need to search for \n");
    scanf("%d",&key);
    binarySearch(arr,n,key);
    
}
