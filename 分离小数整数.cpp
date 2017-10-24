#include <math.h> 
#include <stdio.h> 
int main()
{
double a;
double b;
double c;
scanf("%lf", &c);
b = modf(c, &a);
printf("%lf这个数可以分为%lf与%lf\n", c, a, b);
return 0;
}
