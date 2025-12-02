#ifndef ML_H
#define ML_H

#include "dataset.h"
#include "stats.h"

void data_normalization(void);
void find_outliers(void);//Outlier detection helper.
void data_splitting(void);//Train/test splitting.
void simple_prediction(void);Simple prediction logic

#endif /* ML_H */
