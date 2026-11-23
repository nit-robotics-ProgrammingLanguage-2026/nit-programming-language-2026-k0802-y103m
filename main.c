#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <stdio.h>
#include <math.h>
 
#ifndef M_PI
#define M_PI  3.14159265358979323846
#endif
 
void calc_trig(double deg, double *s, double *c, double *t);
 
int main(void)    
{
    double deg;
    double s, c, t;  
 
    if (scanf("%lf", &deg) != 1) {
        return 1;
    }
 
    calc_trig(deg, &s, &c, &t);
 
    printf("%.4f,%.4f,%.4f\n", s, c, t);
    return 0;
}

void calc_trig(double deg, double *s, double *c, double *t)
{
    double rad = deg * M_PI / 180.0;  
    *s = sin(rad);
    *c = cos(rad);
    *t = tan(rad);
}
