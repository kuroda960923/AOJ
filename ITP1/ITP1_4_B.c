#include <stdio.h>
#include <math.h>

int main(){
    double a;
    scanf("%lf", &a);
    printf("%lf %lf\n", a * a * M_PI, 2 * a * M_PI);
    return 0;
}