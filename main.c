/* 
 * File:   main.c
 * Author: gautam
 *
 * Created on 9 October, 2011, 6:50 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "Automobile.h"

/*
 * 
 */
int main(int argc, char** argv) {
    
    char ans='n';
    automobile_init(2000);
    automobile_auto_input();
    automobile_find_part(0xbb1,0xcc6);
    printf("\n");
    return (EXIT_SUCCESS);
}

