#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h> 
int main()
{
    for (int i = 0; i < 16; i++){
        if(fork() == 0){
            printf("%d \n", i);
            exit(1);
        }
        else
        {
            wait(NULL);
        }
    }
    printf("done \n");
    exit(0);
}