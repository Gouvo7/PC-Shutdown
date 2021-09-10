#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char a,b,c[100];
	int x;

	do {
		printf ("Do you want to shut down your computer?\nEnter y or n :");
		scanf ("%c",&a);
        if (a=='y'){
            printf ("How many minutes untill shitdown? :");
            scanf ("%d",&x);
            printf ("Good");
            sprintf(c,"\\WINDOWS\\System32\\shutdown /s /t %d", x*60);
            system(c);
        }
        else if (a=='n'){
            printf ("Do you want to pause a scheduled shutdown?\nEnter y or n :");
            scanf ("%d",&b);
            if (b=='y'){
                sprintf(c,"\\WINDOWS\\System32\\shutdown /a");
                system(c);
                printf ("Done!");
                exit (0);
            }
            else if (b=='n'){
                printf ("Okay. If a shutdown is scheduled, the computer will shut down ");
                exit (0);
            }
            else{
                system ("cls");
                printf ("Wrong input. Please try again.\n\n");
            }
		printf ("Exiting...");
		exit(0);
        }
        else{
            system ("cls");
            printf ("Wrong input. Please try again.\n\n");
        }
	}while (a!='y' && a!='n');

	return 0;
}



