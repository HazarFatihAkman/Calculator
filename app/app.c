#include "../include/Calculate.h"

void set_status(int *status) {
    do {
        printf("\n0 Continue | 1 Exit : ");
        scanf("%d", status);
    } while (*status != 0 && *status != 1);
}

void operation(int status) {
    struct Calc calc_mem;
    while (status == 0) {
        printf("First Number : ");
        scanf("%f", &calc_mem.fs_nmbr);
        printf("Operation 0 - MINUS | 1 - PLUS | 2 - DIV | 3 - MULTIPLICATION :");
        scanf("%d", &calc_mem.calc_type);
        printf("Second Number : ");
        scanf("%f", &calc_mem.sc_nmbr);
        printf("Restul : %f", calc(calc_mem));
        set_status(&status);
    }
}

int main(void) {
    printf("-- Calculator --\n");
    int status = -1;
    set_status(&status);
    if (status == 0) {
        operation(status);
    }
    return 1;
}