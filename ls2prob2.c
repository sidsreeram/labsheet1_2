/*Lab Sheet 08-Aug-2024 
Write C programs using functions to 
2. to find the average of an integer array */

#include <stdio.h>
float arrayAvg(int arr[],int n){
    float totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum +=arr[i];
    }
    float avg;
    if (n!=0){
        return avg = totalSum /n;
    }
    return 0;
}
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
int main(){
    int n ;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    int arr[n];
    readArray(arr,n);
    displayArray(arr,n);
    float result = arrayAvg(arr,n);
    printf("\n");
    printf("The average of array elements is : %.2f \n",result);
}