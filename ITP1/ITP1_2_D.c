#include <stdio.h>

int main(){
    int W, H, x, y, r = 0;
    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
    if(x - r >= 0 && x + r <= W){
        if(y - r >= 0 && y + r <= H){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }else{
        printf("No\n");
    }
    return 0;
}
