
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    int x = 100;
    int rc = fork();

    if (rc == -1){
        fprintf(stderr, "WHat the Hell,\n");
        exit(1);
    }
    else if (rc == 0){
        x = 50;
        printf("Child: Setting x to 50.\n");
        exit(0);
    }
    else {
        x = 25;
        int wc = wait(NULL);
        printf("Parent: Setting x to 25.\n");
    }

    printf("The final value of x is %d.\n", x);

}