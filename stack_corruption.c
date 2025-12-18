// Example of Segmentation Fault, Stack Corruption

/*
Why does this happen?
Because we have overran buffer one buffer two and whatever memory is allocated for the program that you don't see and we've tried to corrupt memory for another process. The OS wont allow that, so we get seg fault.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    // stack corruption
    char buf2[16] = "overwriteme";
    char buf1[16];

    strcpy(buf2, "1234567890123456789012345678901234567890");

    printf("buf1 val:  %s\n", buf1);
    printf("buf2 val:  %s\n", buf2);
    printf("buf1 addr: %p\n", (void *)buf1);
    printf("buf2 addr: %p\n", (void *)buf2);
}