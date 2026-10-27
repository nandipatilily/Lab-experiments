#include<stdio.h>
#include<math.h>

int main() 
{
 
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c (for ax^2 + bx + c = 0): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) 
    {
        printf("Error: 'a' cannot be zero in a quadratic equation.\n");
        return 0;
    }

    discriminant = (b * b) - (4 * a * c);

    // Condition for real and distinct roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    // Condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }
    // If roots are complex and imaginary
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}
{
   
}