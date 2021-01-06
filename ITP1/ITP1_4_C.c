#include <stdio.h>
int main(){
    int a, b, ans;
    char op;

    while(1){
        scanf("%d %c %d", &a, &op, &b);
        switch(op){
            case '+':
                ans = a + b;
                break;
            case '-':
                ans = a - b;
                break;
            case '*':
                ans = a * b;
                break;
            case '/':
                ans = a / b;
                break;
            case '?':
                ans = 0;
        }
        if(op == '?'){
            break;
        }else{
            printf("%d\n", ans);
        }
    }
    return 0;
}
