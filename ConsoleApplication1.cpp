#include <stdio.h>

int main()
{
    int x, y;

    printf("input number a,b\n: ");
    scanf_s("%d %d",&x,&y);

    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d x %d = %d\n", x, y, x * y);

    return 0;
}