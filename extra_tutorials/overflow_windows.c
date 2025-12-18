#include <stdio.h>
#include <stdlib.h>

#define VERY_SMALL 32
#define NOT_SMALL 64

void debug_function(){
    printf("ENTERING SECRET FUNCTION\n");
    system("cmd");
}

int bad_code(){
    char smallbuffer[VERY_SMALL] = {0};
    fread(smallbuffer, 1, NOT_SMALL, stdin);
    return 0;
}

int main(){
    bad_code();
    printf("You're back! Hooray!");
    return 0;
}