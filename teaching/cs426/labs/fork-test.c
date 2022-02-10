// fork-test.c
// Developed by Prof. L. Felipe Perrone (Bucknell) based on materials created
// by Prof. Phil Kearns for CSCI 315 at The College of William & Mary.
// Revised 1.28.2022 by T. O'Neil.

#include <unistd.h> // need this for fork
#include <stdio.h>  // need this for printf and fflush

int i = 7;
double x = 3.1415926;
int pid;

int main (int argc, char* argv[]) {

  int j = 2;
  double y = 0.12345;

  if (pid = fork()) {
    // parent code
    printf("parent process -- pid= %d\n", pid); fflush(stdout);
    printf("parent sees: i= %d, x= %lf\n", i, x); fflush(stdout);
    printf("parent sees: j= %d, y= %lf\n", j, y); fflush(stdout);
  } else {
    // child code
    printf("child process -- pid= %d\n", pid); fflush(stdout);
    printf("child sees: i= %d, x= %lf\n", i, x); fflush(stdout);
    printf("child sees: j= %d, y= %lf\n", j, y); fflush(stdout);
  }   

  return(0);
}
