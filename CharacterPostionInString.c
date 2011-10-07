/* 
 * File:   main.c
 * Author: gautam
 *
 * Created on 7 October, 2011, 1:40 PM
 */

#include <stdio.h>


/*
 * 
 */
int main(int argc, char** argv) {
    
    char str[100] , c ;
    int i;
    printf ("Enter a string :");gets(str);
    printf("Enter the character to find:");
    c = getchar();
    
    for(i=0;
            /*
             * Loop until a Null character ( \0 ) is found in the string
             * Remember an array is also a  pointer
             */
            *(str+i) != '\0' ;
            i++)
    {
        
        if( *(str+i) == c ){
            /*
             * If the Character is found Print its position and terminate the program
             */
            printf("The character was found at : %d",i+1);
            return 1;
        }
    }
    /*
     * If character was not found print error;
     */
    printf("The character was not found in the string ");
    return 0;
}

