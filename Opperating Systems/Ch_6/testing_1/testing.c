#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>
 #include <fcntl.h>

int main() {
    
    float sum = 0.0f;
    for (int x = 0; x < 10; x++){
        struct timeval start_time;
        struct timeval end_time;

        gettimeofday(&start_time, NULL);

        int fileDiscriptor = open("testing.txt", O_RDONLY);

        gettimeofday(&end_time, NULL);

        int time_difference =  end_time.tv_usec - start_time.tv_usec;
        sum += time_difference;
    }

    double average = sum/10.0f;
    printf("The amount of time for a system call is: %f", average);

    return 0;
}