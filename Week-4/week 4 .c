#include<stdio.h>
int main() 
{
  float A, B, C, D, E, F, G;
    float res_a, res_b, res_c;
    int i, J;
    printf("--- Part a, b, and c ---\n");
    printf("Enter values for A, B, C, D, E, F, G: ");
    scanf("%f %f %f %f %f %f %f", &A, &B, &C, &D, &E, &F, &G);

    res_a = A + B * C + (D * E) + F * G;
    printf("a. Result of A+B*C+(D*E) + F*G = %.2f\n", res_a);

    if (B != 0) 
    {
        res_b = A / B * C - B + A * D / 3.0;
        printf("b. Result of A/B*C-B+A*D/3 = %.2f\n", res_b);
    } else 
    {
        printf("b. Result cannot be computed (Division by zero for A/B).\n");
    }
    float orig_A = A;
    float orig_B = B;
    res_c = A++ + B-- - A; 
    printf("c. Result of A+++B---A = %.2f (Updated variables -> A: %.2f, B: %.2f)\n", res_c, A, B);

    printf("\n--- Part d ---\n");
    printf("Enter an integer value for i: ");
    scanf("%d", &i);
    
    J = (i++) + (++i);
    printf("d. Result J = (i++) + (++i) is: %d (Final value of i: %d)\n", J, i);

    return 0;
}