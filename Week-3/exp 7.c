#include<stdio.h>
#include <math.h>
int main() 
{
  double a, b, c, s, area;
    
    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side a: ");
    scanf("%lf", &a);
    printf("Side b: ");
    scanf("%lf", &b);
    printf("Side c: ");
    scanf("%lf", &c);
    
    if ((a + b > c) && (a + c > b) && (b + c > a)) 
    {
        s = (a + b + c) / 2.0;
        
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area of the triangle = %.2lf\n", area);
    } else 
    {
        printf("Error: The given sides do not form a valid triangle.\n");
    }
    
    return 0;
}