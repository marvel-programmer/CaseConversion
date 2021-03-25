//C program to convert lowercase letters to uppercase letters.

#include<stdio.h>
#include<string.h>

void main(){
    char arr[100];
    int i;

    printf("Enter a String: ");
    scanf("%s", arr);

    for(i=0; i<strlen(arr); i++){
        if(arr[i]>='a' && arr[i]<='z'){
            arr[i] = arr[i] - 32;
        }
        else if(arr[i]>='A' && arr[i]<='Z'){
            arr[i] = arr[i] + 32;
        }
    }

    printf("%s", arr);
}
