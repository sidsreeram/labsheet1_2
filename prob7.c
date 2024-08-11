//7. Insert a value to a given position in an array 
#include <stdio.h>

void displayArray(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n ;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    int arr[n];
     for (int i=0;i<n;i++){
        arr[i] = 0;
    }
    int pos;
    printf("Enter the desired position to insert the value \n");
    scanf("%d",&pos);
    int value;
      if (pos < 1 || pos > n) {  
        printf("Invalid position!\n");
        return 1;
    }
    printf("Enter the value to be inserted \n");
    scanf("%d",&value);
    arr[pos-1]=value;
    displayArray(arr,n);
}