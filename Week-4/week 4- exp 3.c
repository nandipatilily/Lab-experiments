#include<stdio.h>
int main() 
{
  int sub1, sub2, sub3, sub4, sub5;
    int total_marks;
    float average_marks;
    printf("Enter the marks of 5 subjects (out of 100):\n");
    printf("Subject 1: "); scanf("%d", &sub1);
    printf("Subject 2: "); scanf("%d", &sub2);
    printf("Subject 3: "); scanf("%d", &sub3);
    printf("Subject 4: "); scanf("%d", &sub4);
    printf("Subject 5: "); scanf("%d", &sub5);

    total_marks = sub1 + sub2 + sub3 + sub4 + sub5;

    average_marks = (float)total_marks / 5.0;

    printf("\n--- Results ---\n");
    printf("Total Marks Obtained: %d / 500\n", total_marks);
    printf("Average Marks: %.2f%%\n", average_marks);

    return 0;
}