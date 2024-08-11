
// 4. search an integer in an array of integers 

#include <stdio.h>

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
void searchElement(int arr[],int n , int key){
    int found = 0;
    int pos ;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key){
            found = 1;
            pos = i+1;
            break;
        }
    }
    if (found == 1){
        printf("Element is found at position : %d",pos);
    }else{
        printf("The element not found");
    }
    
}
int main(){
    int n ;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    int arr[n];
    readArray(arr,n);
    displayArray(arr,n);
    int key;
    printf("\n");
    printf("Enter the element to search for  \n");
    scanf("%d",&key);
    searchElement(arr,n,key);
    

}