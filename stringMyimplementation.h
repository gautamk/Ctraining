/* 
 * File:   stringMyimplementation.h
 * Author: gautam
 *
 * Created on 14 October, 2011, 5:51 AM
 */
#include<stdio.h>
#ifndef STRINGMYIMPLEMENTATION_H
#define	STRINGMYIMPLEMENTATION_H

#ifdef	__cplusplus
extern "C" {
#endif
    int strncmp(const char *c1,const char *c2,int n){
        unsigned char uc1,uc2;
        int i=0;
        if(n<1){
            return 0;
        }
        while( (n-- > 0) && *(c1+i) == *(c2+i) ){
            
            if(n==0 || *(c1+i) == '\0' || *(c2+i) == '\0'){
                return 0;
            }
            i++;
        }
        
        uc1 = (* (unsigned char *) c1+i );
        uc2 = (* (unsigned char *) c2+i );
        return (uc1>uc2)? 1:-1;
    }
    char * str(const char *c1, const char *c2){
        char *c3;
        int len=0,i=0,j=0;
        
        while(*(c1+i)!='\0'){
            i++;
        }
        len+=i;
        i=0;
        
        while(*(c2+i)!='\0'){
            i++;
        }
        len+=i;
        c3 = calloc(len,sizeof(char));
        i=0;
        
        while(*(c1+i)!='\0'){
            *(c3+i)=*(c1+i);
            i++;
        }
        
        while(*(c2+j)!='\0'){
            *(c3+i)=*(c2+j);
            i++;j++;
        }
        return c3;
    }


#ifdef	__cplusplus
}
#endif

#endif	/* STRINGMYIMPLEMENTATION_H */

