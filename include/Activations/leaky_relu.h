#ifndef LEAKY_RELU_H
#define LEAKY_RELU_H

/**
 * @brief Applies the Leaky Rectified Linear Unit (Leaky ReLU) activation function.
 *
 * @param x The input value.
 * @return The result of the Leaky ReLU activation function.
 */
float leaky_relu(float x);

/**
 * @brief Computes the derivative of the Leaky ReLU activation function.
 *
 * @param x The input value.
 * @return The derivative of the Leaky ReLU function.
 */
float leaky_relu_derivative(float x);

#endif
