#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{ int a,b,c,d;
float n1,n2,x,y;
scanf("%d",&a);
scanf("%d",&b);
scanf("%f",&n1);
scanf("%f",&n2);
c=a+b;
d=a-b;
x=n1+n2;
y=n1-n2;
printf("%d %d\n%.1f %.1f",c,d,x,y);
    return 0;
}
