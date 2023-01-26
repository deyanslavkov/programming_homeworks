struct Process
{
    unsigned int id;
    char name[31];
};

extern struct Process processes[5];
int processescount=0;
static unsigned int nextprocessid();
unsigned int createnewprocess(char name[31]);
void stopprocess(unsigned int id)
