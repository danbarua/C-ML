#ifndef BINARY_CROSS_ENTROPY_LOSS_H
#define BINARY_CROSS_ENTROPY_LOSS_H

/**
 * @brief Computes the Binary Cross-Entropy Loss.
 *
 * @param y Pointer to the ground truth values.
 * @param yHat Pointer to the predicted values.
 * @param n The number of elements in y and yHat.
 * @return The computed loss, or an error code if inputs are invalid.
 */
float binary_cross_entropy_loss(float *y, float *yHat, int n);

/**
 * @brief Computes the derivative of the Binary Cross-Entropy Loss.
 *
 * @param y Ground truth value.
 * @param yHat Predicted value.
 * @return The derivative value.
 */
float binary_cross_entropy_loss_derivative(float y, float yHat);

#endif
