#include <stdio.h>

int main(){
    int x, y, temp;
    scanf("%d %d", &x, &y);
    while(x != 0 || y != 0){
        if(x > y){
            temp = x;
            x = y;
            y = temp;
        }
        printf("%d %d\n", x, y);
        scanf("%d %d", &x, &y);
    }
    return 0;
}