//6. search a name in an array of names 
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void readArray(char names[][20],int n){
    printf("Enter the names in to the array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s",&names[i]);
    }
    

}
void displayArray(char names[][20],int n){
    printf(" the names in the array \n");
    for (int i = 0; i < n; i++)
    {
        printf("%s ",names[i]);
    }
    printf("\n");
    
 
} 
void checkName(char names[][20],int n , char checkName []){ 
    bool found = false;
    for (int i = 0; i < n; i++)
    {    if (strcmp(names[i], checkName) == 0) {  
            found = true;
            break;
        }
    }
    if (found) {
        printf("Name found in the array.\n");
    } else {
        printf("Name not found in the array.\n");
    }
    

}

int main(){
    int n ;
    printf("Enter the size of array to store names \n");
    scanf("%d",&n);

    char names [n][20] ;

    readArray(names,n);
    displayArray(names,n);
    char nameToCheck[20];
    printf("Enter the name to search for \n");
    scanf("%s",&nameToCheck);
    checkName(names,n,nameToCheck);
    return 0;


}
