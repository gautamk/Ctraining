/* 
 * File:   main.c
 * Author: gautam
 *
 * Created on 9 October, 2011, 6:50 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "stringMyimplementation.h"

/*
 * 
 */
int main(int argc, char** argv) {
    char *c1="lle",*c2="Hell";
    char *c3;
    
    printf("%d",strncmp(c1,c2,10));
    
    return (EXIT_SUCCESS);
    
}

