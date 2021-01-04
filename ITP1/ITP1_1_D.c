#include <stdio.h>

int main(){
    int S = 0;
    scanf("%d",&S);
    printf("%d:%d:%d\n", S / (60 * 60),(S / 60) % 60, S % 60);
    return 0;
}

