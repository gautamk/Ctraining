/* 
 * Author: gautam
 *
 * Created on 7 October, 2011, 1:40 PM
 */

#include <stdio.h>


/*
 * Program to find the position of a character in a string
 */
int CharPositionInString(char *str,char c) {
    int i;
    for(i=0;
            /*
             * Loop until a Null character ( \0 ) is found in the string
             * Remember an array is also a  pointer
             */
            *(str+i) != '\0';
            i++ )
    {
        
        if( *(str+i) == c ){
            /*
             * If the Character is found return its position and terminate the program
             */
            
            return i;

        }
    }
    /*
     * If character was not found return -1;
     */

    return -1;
}

