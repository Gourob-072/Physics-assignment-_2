#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793

int main()
{
    double lambda, theta, d;
    int m;

    printf("Enter wavelength (nm), angle (degrees), and slit separation (um): ");
    scanf("%lf %lf %lf", &lambda, &theta, &d);

    if (lambda < 380 || lambda > 750)
    {
        printf("This value is out of the range. Please enter a valid number.\n");
        return 0;
    }

    theta = theta * PI / 180.0;
    d = d * 1e-6;
    lambda = lambda * 1e-9;

    m = (int)round(d * sin(theta) / lambda);

    if (m >= 1)
        printf("%d-th order maxima\n", m);
    else
        printf("No maxima found\n");

    return 0;
}
