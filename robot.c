#include <stdio.h>

int main()
{
    int option, diode_option, diodes_state, quit=0, diode_option_state;
    while(1)
    {
        printf("\nEnter option number: 1-Turn on diode 2-Turn off diode 3-Toggle diode 4-Check diode state 5-Check all diodes state 6-Quit: ");
        scanf("%d", &option);
        switch(option)
        {
            case 1:
                printf("\nEnter diode to turn on: ");
                scanf("%d", &diode_option);
                setbit(diode_option-1);
                break;
            case 2:
                printf("\nEnter diode to turn off: ");
                scanf("%d", &diode_option);
                unsetbit(diode_option-1);
                break;
            case 3:
                printf("\nEnter diode to toggle: ");
                scanf("%d", &diode_option);
                togglebit(diode_option-1);
                break;
            case 4:
                printf("\nEnter diode to check: ");
                scanf("%d", &diode_option);
                diode_option_state=isbitset(diode_option-1);
                if(diode_option_state==-1) printf("\nInvalid diode option!");
                else if(diode_option_state==0) printf("\nDiode %d is turned off", diode_option);
                else printf("\nDiode %d is turned on.", diode_option);
                break;
            case 5:
                diodes_state=getbitstate();
                for(int i=0;i<32;i++)
                {
                    printf("\nDiode %d: %d", i+1, isbitset(i));
                }
                break;
            case 6:
                printf("\nQuitting...\n");
                quit=1;
                break;
            default:
                printf("\nInvalid option!");
        }
        if(quit) break;
    }
}
