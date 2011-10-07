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

    int g_str_len(char *str){
        int len;
        for(len = 0 ; *(str+len) != '\0' ; len++ );
        return len;
    }


#ifdef	__cplusplus
}
#endif

#endif	/* GAUTAMIMPLEMENTATIONS_H */

