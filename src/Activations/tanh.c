#include <math.h>
#include <float.h>
#include <stdio.h>
#include "../../include/Activations/tanh.h"
#include "../../include/Core/error_codes.h"

#define TANH_THRESHOLD 20.0f
#ifndef DEBUG_LOGGING
#define DEBUG_LOGGING 0
#endif

/**
 * @brief Applies the hyperbolic tangent (tanh) activation function.
 *
 * The tanh activation function is defined as:
 * - f(x) = (e^x - e^(-x)) / (e^x + e^(-x))
 *
 * For numerical stability:
 * - Returns 1.0 if x > 20.0
 * - Returns -1.0 if x < -20.0
 *
 * @param x The input value.
 * @return The result of the tanh activation function. Clipped to -1.0 or 1.0
 *         for extreme inputs, ensuring numerical stability.
 */
float tanH(float x)
{
    if (isnan(x) || isinf(x) || x == -INFINITY)
    {
        fprintf(stderr, "[tanh] Error: Invalid input (NaN or Inf)\n");
        return CM_INVALID_INPUT_ERROR;
    }
    if (x > TANH_THRESHOLD)
    {
#if DEBUG_LOGGING
        printf("[tanh] Debug: Input: x=%f, Output: 1.0 (clipped)\n", x);
#endif
        return 1.0f;
    }
    else if (x < -TANH_THRESHOLD)
    {
#if DEBUG_LOGGING
        printf("[tanh] Debug: Input: x=%f, Output: -1.0 (clipped)\n", x);
#endif
        return -1.0f;
    }
    else
    {
        float e_pos = expf(x);
        float e_neg = expf(-x);
        float result = (e_pos - e_neg) / (e_pos + e_neg);
#if DEBUG_LOGGING
        printf("[tanh] Debug: Input: x=%f, Output: %f\n", x, result);
#endif
        return result;
    }
}

/**
 * @brief Computes the derivative of the tanh activation function.
 *
 * The derivative of tanh is:
 * - f'(x) = 1 - f(x)^2
 *
 * @param tanh_output The output of the tanh function (f(x)).
 * @return The derivative of the tanh function.
 */
float tanh_derivative(float tanh_output)
{
    if (isnan(tanh_output) || isinf(tanh_output) || tanh_output < -1.0f || tanh_output > 1.0f)
    {
        fprintf(stderr, "[tanh_derivative] Error: Invalid tanh output (NaN, Inf, or out of range)\n");
        return CM_INVALID_INPUT_ERROR;
    }

    return 1.0f - tanh_output * tanh_output;
}
