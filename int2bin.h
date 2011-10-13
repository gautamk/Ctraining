/* 
 * File:   int2bin.h
 * Author: gautam
 *
 * Created on 13 October, 2011, 11:19 PM
 */

#ifndef INT2BIN_H
#define	INT2BIN_H

#ifdef	__cplusplus
extern "C" {
#endif

    unsigned long int2binary(int val){
        unsigned long binary = 0;
        while(val!=0){
            binary = binary * 10 + (val%10)%2;
            val/=10;
        }
        return binary;
    }


#ifdef	__cplusplus
}
#endif

#endif	/* INT2BIN_H */

