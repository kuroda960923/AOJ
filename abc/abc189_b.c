#include <stdio.h>

int main(){
    int N, X, V, P, sumalo = 0;
    int ans = -1;
    scanf("%d %d", &N, &X);
    
    for(int i = 0; i < N; i++){
        scanf("%d %d", &V, &P);
        sumalo += V * P
        if(sumalo > X * 100){
            ans = i + 1;
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}