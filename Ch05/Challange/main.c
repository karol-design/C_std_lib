#include <math.h>
#include <stdio.h>

#define PI 3.1415926

int main()
{
  // Get X, Y
  double x, y;
  printf("Please specify the cartesian coordinates of point A in the following form \"x,y\": ");
  scanf("%lf,%lf", &x, &y);

  double r, theta;
  r = sqrt((pow(x, 2.0) + pow(y, 2.0)));
  theta = 180.00 * atan2(y, x) / PI;
  printf("The number can be expressed as (%f, %f*), where %f is the radious and %f* is the angle theta", r, theta, r, theta);

  // Get r, theta
  printf("\n\nPlease specify the polar coordinates of point A in the following form \"r,theta\" (angle in degrees):");
  scanf("%lf,%lf", &r, &theta);

  theta = theta * PI / 180.00;
  x = r * cos(theta);
  y = r * sin(theta);
  printf("The number can be expressed as (%f,%f), where %f is the x coordinate and %f is the y coordinate", x, y, x, y);

  return 0;
}