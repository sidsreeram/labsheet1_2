//9. search a number in an integer array, if its found then swap its left and right values */
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
void linearSearch(int arr[],int n, int key){
    bool found = false;
    int temp;
    int i = 0;
    while ( i < n)
    {
        if (arr[i]==key){
             found = true;
             printf("Element is found at index %d \n",i);
              temp = arr[i-1];
              arr[i-1] = arr[i+1];
              arr[i+1]= temp;
             break;
        }
        i++;

    }
    
    
}

int main(){
    int n ;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    int arr[n];
    readArray(arr,n);
    displayArray(arr,n);
    printf("\n");
    int key;
    printf("Enter the value you need to search for \n");
    scanf("%d",&key);
   linearSearch(arr,n,key) ; 
   printf("Array after swapping \n");
   displayArray(arr,n);

}