#include<stdio.h>
int main() 
{
    int n1, n2, n3, n4, max, min;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 >= n2 && n1 >= n3 && n1 >= n4) max = n1;
    else if (n2 >= n1 && n2 >= n3 && n2 >= n4) max = n2;
    else if (n3 >= n1 && n3 >= n2 && n3 >= n4) max = n3;
    else max = n4;

    if (n1 <= n2 && n1 <= n3 && n1 <= n4) min = n1;
    else if (n2 <= n1 && n2 <= n3 && n2 <= n4) min = n2;
    else if (n3 <= n1 && n3 <= n2 && n3 <= n4) min = n3;
    else min = n4;

    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}