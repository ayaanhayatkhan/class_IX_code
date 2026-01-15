#include<stdio.h>
int main()
{
    int x, y, z, l;
    printf("Enter three numbers:\n");
    scanf("%d%d%d", &x, &y, &z);

    if (x > y)
        l = x;
    else
        l = y;

    if (l > z)
        printf("The largest is : %d", l);
    else
        printf("The largest is : %d", z);

    return 0;
}
