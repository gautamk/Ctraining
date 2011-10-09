/* 
 * File:   Automobile.c
 * Author: gautam
 *
 * Created on 8 October, 2011, 7:17 PM
 * 
 * Problem Statement :
 * An automobile company has serial number for engine parts starting from AA0 to FF9.
 * The other characterstics of part to be specified in a structure are 
     * year of manufacturer,
     * material,
     * qty
 * 1.specify structure to store info corresponding to part
 * 2.write pgm to retrieve info on parts with serial no between BB1 and  CC6
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 * 
 */
struct EngineParts{
    /*
     * Though serial numbers range from 0xaa0 to 0xff9
     * they can be stored in a 
     */
    int serial_number;
    unsigned int year_of_manufacture;
    unsigned int quantity;
    char *material;
    
}*Eparts;

int available_number_of_parts=-1; /*-1 is assigned to indicate that Eparts 
                                   * has not been initilized
                                   */ 
int max_number_of_parts;
/*
 * function initilizations
 */

/*
 * Function definitions
 */

void automobile_init(const unsigned int number_of_parts)
{
    Eparts =(struct EngineParts *) calloc(number_of_parts,sizeof(struct EngineParts));
    available_number_of_parts=0;
    max_number_of_parts = number_of_parts;
}
void automobile_destroy(){ free(Eparts); }

void automobile_add_part(const int serial_number,
        const unsigned int year_of_manufacture,
        const unsigned int quantity , 
        const char *material){
    /*
     * Store the address to the latest part
     */
   struct EngineParts *new ;
   new = (Eparts+available_number_of_parts);
    
    // Copying a String is a little bit complicated
    // First memory is allocated for the string 
    new->material = (char *)calloc(strlen(material),sizeof(char));
    //Then the string is copied
    strcpy((char *)new->material,material);    
    
    new->quantity = quantity;
    new->serial_number = serial_number;
    new->year_of_manufacture = year_of_manufacture;
    
    available_number_of_parts++;
}

void automobile_print_engine_part(const int offset){
     struct EngineParts *current;
    if(offset < available_number_of_parts)
    {
        current = (Eparts+offset);
        printf("EnginePart\n  Serial Number:%X",current->serial_number);
        printf("\n  Quantity:%u",current->quantity);
        printf("\n  Year of manufacture:%u",current->year_of_manufacture);
        printf("\n  Material:%s",current->material);
        printf("\n");
    }
}

void automobile_find_part(const int start_serial_number,const int end_serial_number){
    /*
     * Function to print the details of Parts between the given serial numbers
     * This function assumes that the parts are not in sorted order
     * This function is essentially the naive implementation 
     * 
     * Function Version 1
     */
    int i;
    struct EngineParts *current;
    for( i =0;i<available_number_of_parts;i++){
        current = (Eparts+i);
        if((current->serial_number > start_serial_number) && 
                (current->serial_number< end_serial_number)
                ){
            automobile_print_engine_part(i);
        }
    }
}
void automobile_cli_engine_part(){
    /*
     * Get input from the user and add Engine part to the array
     */
    int serial_number;
    unsigned int qty , yom;
    char material[100];
    printf("Enter the details of the Engine Part :-\n");
    printf("\tSerial Number :");scanf("%X",&serial_number);
    printf("\tQuantity:");scanf("%u",&qty);
    printf("\tYear of Manufacture:");scanf("%u",&yom);
    printf("\tMaterial:");scanf("%s",material);
    /*
     * To consume any lingering spaces and \n new lines 
     * an extra scanf is added
     */
    getchar();
    automobile_add_part(serial_number,yom,qty,material);
}
void automobile_auto_input(){
    int i, quantity,year_of_manufacture,serial_number;
    char material[20]="something";
    for(i = 0;i<max_number_of_parts;i++){
        quantity = i;
        year_of_manufacture=2000+i;
        serial_number = 0xbaf + i;
        automobile_add_part(serial_number,quantity,year_of_manufacture,material);
        
    }
}