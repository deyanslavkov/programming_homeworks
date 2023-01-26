#ifndef BITSTATE_H
#define BITSTATE_H
static unsigned int bitstate=0;
void setbit(int n);
void unsetbit(int n);
void togglebit(int n);
int isbitset(int n);
unsigned int getbitstate();
#endif
