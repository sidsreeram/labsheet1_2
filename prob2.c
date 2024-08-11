/*3. display all the values in odd positions 
  4. display all the values in even positions */
#include <stdio.h>
void readArray(int arr[],int n){
    printf("Enter the array elements  : \n");
    for (int i = 0; i < n; i++)
    {
     scanf("%d",&arr[i]);
    }
    
}
void oddPositionDisplay(int arr[],int n){
    printf("The array elements in odd postions are : \n");
    for (int i = 0; i < n; i++)
    {
        if (i%2==0){
            printf("%d ",arr[i]);
        }
    }
    
}
void evenPositionDisplay(int arr[],int n){
    printf("The array elements in even postions are : \n");
    for (int i = 0; i < n; i++)
    {
        if (i%2!=0){
            printf("%d ",arr[i]);
        }
    }
    
}
int main(){
    int n ;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[n];
    readArray(arr,n);
    oddPositionDisplay(arr,n);
    printf("\n");
    evenPositionDisplay(arr,n);
}