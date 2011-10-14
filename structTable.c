#include<stdlib.h>
#include<stdio.h>
struct Det{
    char *name;
    char *fatherName;
    char *religion;
}*Details;

void Det_init(int no_of_details,int size_of_names,int size_of_religions){
    int i = 0;
    Details = calloc(no_of_details, sizeof(struct Det));
    for( i = 0;i<no_of_details;i++){
        (Details+i)->name = calloc(size_of_names, sizeof(char));
        (Details+i)->fatherName =  calloc(size_of_names, sizeof(char));
        (Details+i)->religion = calloc(size_of_religions,sizeof(char));
    }
}
