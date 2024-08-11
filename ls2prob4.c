//5. search a character in your name 
#include <stdio.h>
#include <stdbool.h>

void checkChar(char name[] ,char searchElement){
    bool found = false ;
    for (int i = 0; name[i]!='\0'; i++)
    {
        if (name[i] == searchElement) {
            found = true;
            break;
        }
    }
    if (found){
        printf("The entered character is found in name");
    }else{
        printf("The entered character is not found in name");

    }
    

}
int main(){
    char name[] = "SIDDHARTH" ; 
    char searchElement ;
    printf("Enter the letter to search for :\n");
    scanf("%c",&searchElement);
    checkChar(name ,searchElement);
    
}