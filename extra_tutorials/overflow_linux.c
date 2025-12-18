/*
Full Tutorial:
https://youtu.be/C630ttQlyhI?si=WYLP10RPPdAaUwQ2
*/
/*
Command used to run this:
gcc -o overflow overflow_linux.c -m32 -fno-stack-protector -no-pie -fno-pic -zexecstack

Why a prgm failed?
sudo dmesg | tail
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define VERY_SMALL 32
#define NOT_SMALL 64

void debug_function(){
    printf("ENTERING SECRET FUNCTION\n");
    system("/bin/sh");
}

int bad_code(){
    char smallbuffer[VERY_SMALL] = {0};
    int n = read(0, smallbuffer, NOT_SMALL);
    return n;
}

int main(){
    bad_code();
    printf("You're back! Hooray!");
    return 0;
}