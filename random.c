#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char randchar();




char randchar(){

    int r = rand();
    char a = 'A' + (r% 26);
    return a;
}

