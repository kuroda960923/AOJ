#include <stdio.h>
int main(){
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d %d %1f\n", a / b, a % b, (double) a / b);
    return 0;
}
