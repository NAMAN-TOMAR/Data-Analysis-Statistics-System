
#ifndef UTILS_H
#define UTILS_H

/* 
 * Might reorganize later if this file gets messy.
 */

/* 
 * Clears the screen — works differently on Windows vs Linux,
 * so the implementation might be a bit hacky. 
 * Note to self: double-check portability later.
 */
void clear_screen(void);

/*
 * Sorting helper. 
 * I kept the signature simple for now; maybe switch to qsort someday,
 * but this one's easy enough for small arrays.
 * 
 * Also: parameter names aren't super descriptive, but meh.
 */
void sort_array(double arr[], int n);

#endif /* UTILS_H */
