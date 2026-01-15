#include<stdio.h>
int main()

{
    int x,y,z,s;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&x,&y,&z);
    if (x<y)
    s=x;
    else
    s = y;
    if(s<z)
    printf("The smallest is :%d",s);
    else
        printf("The smallest is :%d",z);


}