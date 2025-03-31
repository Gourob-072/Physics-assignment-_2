#include <stdio.h>
 #include <math.h>
#define PI 3.141592653589793

int main()
 {

 double theta = 45.0;

 double theta_rad = theta * PI / 180.0;

 double ratio = 1.0 / sin(theta_rad);

 printf("Ratio of slit width to wavelength: %.4f\n", ratio);

  return 0;

  }
