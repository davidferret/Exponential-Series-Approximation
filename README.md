# Exponential Series Approximation

This program calculates the exponential function \( e^x \) using a Taylor series expansion. It compares the approximation to the built-in C library function and also provides an option to export the convergence data to a CSV file for further analysis.

You can compute \( e^x \) with a user-defined number of terms, allowing you to control the precision. The program also lets you set a precision tolerance for stopping criteria, giving you flexibility in how accurate you want the approximation to be.

In addition to calculating the exponential function, it compares the results with the standard C math library function to evaluate the difference between the approximation and the built-in function. If you'd like, you can export the series convergence data to a CSV file for later use or analysis. The program also ensures you enter valid numeric inputs, making the process more user-friendly and accurate.

## Example Output
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

