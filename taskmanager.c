#include <stdio.h>

int main()
{
    int option=0, quit=0;
    char name[31];
    unsigned int createdprocessid, stoppedprocessid;
    while(1)
    {
        printf("1-Create a process\n2-Show process list\n3-Stop a process\n4-Quit\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            printf("Enter process name: ");
            scanf("%s", name);
            createdprocessid=createnewprocess(name);
            if(createdprocessid==0)
            {
                printf("There is not enough space. You should stop a process before creating a new one.");
            }
            else
            {
                printf("Process created successfully.");
            }
            break;
        case 2:
            printf("Process list: ");
            printf("id name");
            for(int i=0;i<5;i++)
            {
                if(process[i].id!=0)
                {
                    printf("%d %s\n", process[i].id, processid[i].name);
                }
            }
        case 3:
            printf("Enter process id: ");
            scanf("%d", &stoppedprocessid);
            stopprocess(stoppedprocessid);
        case 4:
            printf("Quitting...");
            quit=1;
            break;
        default:
            printf("Invalid option!\n");
        }
        if(quit) break;
    }
    return 0;
}
