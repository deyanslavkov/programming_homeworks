#include "bitstate.h"

void setbit(int n)
{
    if(n>=0&&n<=31)
    {
        bitstate|=1<<n;
    }
}

void unsetbit(int n)
{
    if(n>=0&&n<=31)
    {
        bitstate&=~(1<<n);
    }
}

int isbitset(int n)
{
    if(n>=0&&n<=31)
    {
        if(bitstate&(1<<n))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return -1;
    }
}

void togglebit(int n)
{
    if(n>=0&&n<=31)
    {
        if(bitstate&(1<<n))
        {
            bitstate&=~(1<<n);
        }
        else
        {
            bitstate|=1<<n;
        }
    }
}

unsigned int getbitstate()
{
    return bitstate;
}
