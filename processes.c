#include <string.h>
#include "processes.h"

static unsigned int nextprocessid()
{
    for(int i=0;i<5;i++)
    {
        if(process[i].id==0)
        {
            return i+1;
        }
    }
    return 0;
}

unsigned int createnewprocess(char name[31])
{
    if(processescount<5)
    {
        process[processescount].id=nextprocessid();
        strcpy(process[processescount].name, name);
        processescount++;
        return process[processescount].id;
    }
    else return 0;
}

void stopprocess(unsigned int id)
{
    for(int 0;i<5;i++)
    {
        if(process[i].id==id)
        {
            for(int j=4;j>=0;j--)
            {
                if(process[j].id!=0)
                {
                    process[i].id=process[j].id;
                    strcpy(process[i].name, process[j].name);
                    process[j].id=0;
                    strcpy(process[j].name, "");
                    processescount--;
                }
            }
        }
    }
}
