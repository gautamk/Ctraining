/* 
 * File:   main.c
 * Author: gautam
 *
 * Created on 9 October, 2011, 6:50 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "setBit.h"

/*
 * 
 */
int main(int argc, char** argv) {
    char *ptr ;
    ptr = calloc(1024 , sizeof(char));
    *(ptr+64)='\0';
    setBit(ptr,513);
    printf("%d",*(ptr+64));
    return (EXIT_SUCCESS);
    
}

