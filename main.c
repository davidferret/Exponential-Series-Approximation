#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

double calculateExponential(double x, int maxTerms, double tolerance);
void exportToCSV(double x, int maxTerms);

int main(void) {
    int n;
    double x, ex, tolerance;
    char choice;

    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter number of terms (n): ");
    scanf("%d", &n);
    printf("Enter desired precision tolerance (e.g., 0.0000001): ");
    scanf("%lf", &tolerance);

    ex = calculateExponential(x, n, tolerance);

    printf("The approximate value of e^%.6f: %.12f\n", x, ex);
    printf("The value of e^%.6f using C library function: %.12f\n", x, exp(x));
    printf("The absolute difference between the two values: %.12f\n", fabs(ex - exp(x)));

    printf("\nDo you want to export the series convergence to a CSV file? (y/n): ");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y') {
        exportToCSV(x, n);
        printf("Data exported to 'exponential_series.csv'.\n");
    }
    
    return 0;
}

double calculateExponential(double x, int maxTerms, double tolerance) {
    double ex = 1.0, term = 1.0;
    for (int i = 1; i < maxTerms; i++) {
        term *= x / i;
        ex += term;
        if (fabs(term) < tolerance) {
            break;
        }
    }
    return ex;
}

void exportToCSV(double x, int maxTerms) {
    FILE *file = fopen("exponential_series.csv", "w");
    if (!file) {
        printf("Error creating CSV file!\n");
        return;
    }
    
    fprintf(file, "Term,Approximation\n");
    double ex = 1.0, term = 1.0;
    fprintf(file, "0,%.12f\n", ex);
    
    for (int i = 1; i < maxTerms; i++) {
        term *= x / i;
        ex += term;
        fprintf(file, "%d,%.12f\n", i, ex);
    }
    
    fclose(file);
}
