#include <stdlib.h>
#include "utils.h"
/*
* Clearing the screen
 */
void clear_screen(void) {
#ifdef _WIN32
    system("cls");
#else
    system("clear"); // note: might behave weirdly on some terminals
#endif
}

/* Simple bubble sort for small arrays (used for quartiles/median) */



void sort_array(double arr[], int n) {
    if (n <= 1) return;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                double tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
