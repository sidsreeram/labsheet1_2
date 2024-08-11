//5. swap the first and last values in a character array 
#include <stdio.h>
void readArray(char arr[],int n){
    printf("Enter the array elements : \n");

for (int i = 0; i <n; i++)
{
   scanf(" %c",&arr[i]);
}
}
void displayArray(char arr[],int n){
   for (int i = 0; i < n; i++)
   {
      printf("%c ",arr[i]);
   }
   
}
void swapElement(char arr[],int n){
    char temp ;
  temp = arr[0];
  arr[0]=arr[n-1];
  arr[n-1] = temp ;
}
int main(){
    int n ;
    printf("Enter the size of the array : \n");
    scanf("%d",&n);
    char arr[n];
    readArray(arr,n);
    printf("Array before swapping first and last element : \n");
    displayArray(arr,n);
    swapElement(arr,n);
    printf("\n");
    printf("Array after swapping first and last element : \n");
    displayArray(arr ,n);

}