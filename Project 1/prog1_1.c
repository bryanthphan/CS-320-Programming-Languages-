#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main(void) 
{
    char *str = malloc(1); /*allocates memory for the string*/
    printf("Assignment #1-1, Bryan Phan, bryan.th.phan@gmail.com\n");
    printf("What is your name?\n"); 
    int name;
    int i = 0;
    /*no new line or end of file*/
    while((name = getchar()) != '\n' && name != EOF)
    {
        str[i++] = name; 
        str = realloc(str, i + 1); 
    } 
    str[i] = '\0';/*end of string/null-terminated string*/
    printf("Hello %s!\n",str); 
    free(str); /*release memory*/
    return 0; 
} 

