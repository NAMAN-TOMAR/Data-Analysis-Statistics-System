#ifndef STATS_H
#define STATS_H

#include "dataset.h"

typedef struct {
    double mean;
    double median;
    double mode; /* Not implemented fully; placeholder */
    double std_deviation;// sometimes I confuse this with variance... double-check math later
    double variance;
    double min;
    double max;
    double range;
    double q1, q2, q3;// quartiles — naming is fine, even if q2 == median
    double iqr;// interquartile range (helps spot outliers)
} Statistics;

/* Calculations */
Statistics calculate_descriptive_stats(Dataset *dataset);
double calculate_correlation(double x[], double y[], int n);

/* Display */
void print_statistics(Statistics stats, const char *variable_name);

#endif /* STATS_H */
