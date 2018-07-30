#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
        printf("Runiing ps commmad with exclp\n");
        execlp("ls","ll","-m",0);
        printf ("Done\n");
//        exit(0);
}
                      
