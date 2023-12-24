//
// Created by Kevin Ye on 12/24/2023.
// Copyright (c) KevinYe on 12/24/2023.

#include <stdio.h>
#include <math.h>

double approx_ln_1_plus_x(double x, double epsilon) {
  double result = 0.0;
  double term = x;
  int n = 1;

  while (fabs(term) > epsilon) {
    result += term;
    term = -term * x * (double) n / (n + 1);
    n++;
  }

  return result;
}

int main() {
  double x;
  scanf("%lf", &x);
  double epsilon = 1e-8;
  double approx_result = approx_ln_1_plus_x(x, epsilon);
  double actual_result = log(1 + x);

  printf("Approximate ln(1+%lf): %lf\n", x, approx_result);
  printf("Actual ln(1+%lf): %lf\n", x, actual_result);
  printf("Error: %lf\n", fabs(approx_result - actual_result));

  return 0;
}
