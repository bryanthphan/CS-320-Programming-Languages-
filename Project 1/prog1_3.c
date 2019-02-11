#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prog1_2.h"

int main(int argc, char* argv[]) { 
    char buff[256];
    char *token, *subtoken, *subsubtoken;
   
    STACK* s = MakeStack(256); 
 
    printf("Assignment #1-3, Bryan Phan, bryan.th.phan@gmail.com\n");
    /*i.e. ./prog1_3 # */
    if (argc != 2) { 
        printf("Error: missing single command line argument\n");
        return 1;
    }
    /*N is the value of the command by user and decrements*/
    int N = atoi(argv[1]);
    while(N > 0) {
    	N--;
        printf("> ");
        fgets(buff,256,stdin);
        /*space delimiter*/
        token = strtok(buff," \n\t");
        subtoken = strtok(NULL," \n\t");
        subsubtoken = strtok(NULL," \n\t");
        /*if the string says pop followed by a number and if there is no string after*/
        if(strcmp("push",token)==0 && subsubtoken == NULL) {
        	/*converts char into int*/
        	Push(s, atoi(subtoken));
        	token = strtok(NULL," \n\t");
        }
        /*if the string says pop and if there is no string after*/
        else if(strcmp("pop",token)==0 && subtoken == NULL) {
        	printf("%d\n", Pop(s));
        } 
       
    }
}



        
        
