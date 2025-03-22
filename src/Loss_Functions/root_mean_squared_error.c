#include <math.h>
#include "../../include/Loss_Functions/root_mean_squared_error.h"

float rootMeanSquaredError(float *y, float *yHat, int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += powf(y[i] - yHat[i], 2);
    }
    if (n == 0)
    {
        return 0;
    }
    return sqrtf(sum / n);
}