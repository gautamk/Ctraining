/* 
 * File:   Main.c
 * Author: gautam
 *
 * Created on 7 October, 2011, 7:44 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <GautamImplementations.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    char *str = calloc(200,sizeof(char));
    scanf("%s",str);
    printf("\n%d",g_str_len(str));

    return (EXIT_SUCCESS);
}

