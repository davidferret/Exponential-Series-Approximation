# Exponential Series Approximation

This program calculates the exponential function \( e^x \) using a Taylor series expansion. It compares the approximation to the built-in C library function and provides an option to export the convergence data to a CSV file.

- **Custom Exponential Calculation**: Computes \( e^x \) using a user-defined number of terms.
- **Precision Control**: Allows users to set a precision tolerance for stopping criteria.
- **Comparison with Standard Function**: Evaluates the difference between the approximation and the standard C math library function.
- **CSV Export Option**: Saves the series convergence data for further analysis.
- **User-Friendly Input Handling**: Ensures valid numeric inputs for accuracy.

## Example Usage
```
Enter the value of x: 2.0
Enter number of terms (n): 20
Enter desired precision tolerance (e.g., 0.0000001): 0.000001
The approximate value of e^2.000000: 7.389056098931
The value of e^2.000000 using C library function: 7.389056098931
The absolute difference between the two values: 0.000000000000

Do you want to export the series convergence to a CSV file? (y/n): y
Data exported to 'exponential_series.csv'.

```

