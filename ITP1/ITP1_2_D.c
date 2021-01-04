#include <stdio.h>

int main(){
    int W, H, x, y, r = 0;
    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
    if(r - x >= 0 && r + x <= W){
        if(r - y >= 0 && r + y <= H){
            printf("")
        }
    }
    if(b > c){
        temp = b, b = c, c = temp;
    }
    if(a > b){
        temp = a, a = b, b = temp;
    }
    if(b > c){
        temp = b, b = c, c = temp;
    }
    printf("%d %d %d\n",a, b, c);

    return 0;
}
