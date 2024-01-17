//
// Created by Ernest Wong on 1/17/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void seedRandom() {
    srand((unsigned int)time(NULL));
}

char randchar() {
    return 'A' + rand() % 26;
}
