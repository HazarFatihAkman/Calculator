#ifndef CALCULATE_H
#define CALCULATE_H

#include <stdio.h>

enum Calc_Types {
    MINUS,
    PLUS,
    DIV,
    MULTIPLICATION
};

struct Calc {
    float fs_nmbr;
    float sc_nmbr;
    enum Calc_Types calc_type;
};

float calc(struct Calc);

#endif