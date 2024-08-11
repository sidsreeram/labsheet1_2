/*
1. Find the maximum element in an array 
2. find the minimum element in an array 

*/

#include <stdio.h>
typedef struct  {
    int max;
    int min;
}MinMax ;

MinMax maxMinElement(int arr[],int n){
    MinMax result ;
    
    result.max = arr[0];
    result.min = arr[0];
   for(int i =0;i<n;i++){
    if (arr[i]>result.max){
     result.max = arr[i];
    }
    if (arr[i]<result.min){
     result.min = arr[i];
    }
   }
   return result ;
}

void readArray(int arr[],int n){
    printf("Enter the array elements \n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void displayArray(int arr[],int n){
        printf("The array elements are \n");

    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n ;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    int arr[n];
    readArray(arr,n);
    displayArray(arr,n);
  MinMax result = maxMinElement(arr,n);
    printf("\n");
    printf("The maximum element in the array is %d \n",result.max);
    printf("The minimum element in the array is %d \n",result.min);

}