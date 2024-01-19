#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char randchar();




char randchar(){

    int r = rand();
    char randomletter = 'A' + (r% 26);
    return randomletter;
}

