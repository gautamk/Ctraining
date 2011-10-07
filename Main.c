/* 
 * File:   Main.c
 * Author: gautam
 *
 * Created on 7 October, 2011, 7:44 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "GautamImplementations.h"

/*
 * 
 */
int main(int argc, char** argv) {
    
    char *str1 = calloc(200,sizeof(char)),*str2 = calloc(200,sizeof(char));
    printf("Enter the 2 strings : ");
    scanf("%s",str1);
    g_str_cpy(str2,str1);
    
    printf("My:%s , %s",str1 , str2);

    return (EXIT_SUCCESS);
}

