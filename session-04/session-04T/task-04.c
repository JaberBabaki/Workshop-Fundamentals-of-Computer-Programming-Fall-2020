//
// Created by jaberALU on ۳۰/۱۱/۲۰۲۰.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    long long int n = 9876543210;
    int day = n / (24 * 60 * 60);
    n = n % (24 * 60 * 60);
    int hour = n / (60 * 60);
    n = n % (60 * 60);
    int minutes = n / 60;
    n = n % 60;
    int seconds = n;
    printf("day %d   hours %d   minutes %d   seconds %d",day,hour,minutes,seconds);
    return 0;
}
