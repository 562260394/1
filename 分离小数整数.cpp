#include <math.h> 
#include <stdio.h> 
int main()
{
double a;
double b;
double c;
scanf("%lf", &c);
b = modf(c, &a);
printf("%lf��������Է�Ϊ%lf��%lf\n", c, a, b);
return 0;
}
