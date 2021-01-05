#include <stdio.h>

int main(){
    int i = 1;
    int x = 0;
    scanf("%d", &x);

    while(x != 0){
        printf("Case %d: %d\n", i, x);
        scanf("%d", &x);
        i++;
    }
    return 0;
}