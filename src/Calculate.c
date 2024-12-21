#include "../include/Calculate.h"

float calc(struct Calc arg) {
    switch (arg.calc_type)
    {
        case MINUS:
            return arg.fs_nmbr - arg.sc_nmbr;
        case PLUS:
            return arg.fs_nmbr + arg.sc_nmbr;
        case MULTIPLICATION:
            return arg.fs_nmbr * arg.sc_nmbr;
        case DIV:
            return arg.fs_nmbr / arg.sc_nmbr;
        default:
            printf("Something is wrong.");
            break;
    }
}