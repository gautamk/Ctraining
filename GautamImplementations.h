/* 
 * File:   GautamImplementations.h
 * Author: gautam
 *
 * Created on 7 October, 2011, 7:41 PM
 */

#ifndef GAUTAMIMPLEMENTATIONS_H
#define	GAUTAMIMPLEMENTATIONS_H

#ifdef	__cplusplus
extern "C" {
#endif

    int g_str_len(const char *str){
        int len;
        for(len = 0 ; *(str+len) != '\0' ; len++ );
        //One is subtracted to not count the NULL character (\0)
        return len-1;
    }
    void g_str_cpy(char *str1 , const char *str2){
        int i;
        for(i=0;;i++){
            *(str1+i) = *(str2+i);
            if(*(str2+i) == '\0')
                break;
        }
    }
    int g_str_cmp( const char *str1 , const char *str2 ){
        int sum=0,s1,s2;
        
        // Not a perfect implementation 
        // Works only if the strings are equal
        for(s1=0 , s2=0 ; *(str1+s1) != '\0' || *(str2+s2) != '\0';) {
            if((*(str1+s1) != '\0') && (*(str2+s2) != '\0')){
              sum+=  *( str1 + (s1++) ) - *( str2 + (s2++) ) ;
            }
               
            else if(*(str1+s1) != '\0')
                sum+=*( str1 + (s1++) );
            else if(*(str2+s2) != '\0')
                sum-=*( str2 + (s2++) );
        }
        return sum;
    }


#ifdef	__cplusplus
}
#endif

#endif	/* GAUTAMIMPLEMENTATIONS_H */

