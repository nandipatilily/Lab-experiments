#include<stdio.h>
#include <math.h>
int main() 
{
  double u, a, t, distance;
    
    printf("Enter initial velocity (u) in m/s: ");
    scanf("%lf", &u);
    
    printf("Enter acceleration (a) in m/s^2: ");
    scanf("%lf", &a);
    
    printf("Enter time period (t) in seconds: ");
    scanf("%lf", &t);
    
    distance = (u * t) + (0.5 * a * t * t);
    
    printf("Total distance travelled = %.2lf meters\n", distance);
    
    return 0;
}