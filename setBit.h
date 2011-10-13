/* 
 * File:   setBit.h
 * Author: gautam
 *
 * Created on 13 October, 2011, 10:15 PM
 */

#ifndef SETBIT_H
#define	SETBIT_H

#ifdef	__cplusplus
extern "C" {
#endif

    void setBit(char *str ,int bit2Set){
        int offset = bit2Set/8;
        int bit_offset = bit2Set-offset;
        
        *(str+offset)|=(1<<bit_offset);        
    }


#ifdef	__cplusplus
}
#endif

#endif	/* SETBIT_H */

