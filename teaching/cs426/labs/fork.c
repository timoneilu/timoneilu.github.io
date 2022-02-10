// fork.c
// Developed by Prof. L. Felipe Perrone (Bucknell) based on materials created
// by Prof. Phil Kearns for CSCI 315 at The College of William & Mary.
// Revised 1.28.2022 by T. O'Neil.

#include <unistd.h> // need this for fork and sleep
#include <stdio.h>  // need this for printf and fflush

int main(int argc, char *argv[]) {
  int pid; int num;
  if ((pid = fork()) == -1) {
    perror("something went wrong in fork");
    exit(-1);
  } else if (pid == 0) {
    for (num=0; num < 20; num++) {
      printf("child: %d\n", num); fflush(stdout);
      sleep(1);
    }
  } else {
    for (num=0; num < 20; num+=3) {
       printf("parent: %d\n", num); fflush(stdout);
       sleep(1);
    }
  }
}
