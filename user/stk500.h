#ifndef _STK500_H
#define _STK500_H

extern int stk_stage;
extern int stk_error;
extern int stk_percent;
extern const char *stk_error_descr;
extern char stk_major, stk_minor, stk_signature[3];

void init_stk500();
void program(int size, int pos_start);
void reset_arduino();

#endif //_STK500_H
