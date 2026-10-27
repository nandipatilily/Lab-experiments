#include<stdio.h>
#include<math.h>

int main() 
{
  
  float num1, num2, result;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("\n--- Calculator Menu ---\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice)
     {
        case 1:
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (num2 == 0) 
            {
                printf("Division by zero is not possible\n");
            } else 
            {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            }
            break;
        default:
            printf("Invalid option\n");
    }

    return 0;
   
}