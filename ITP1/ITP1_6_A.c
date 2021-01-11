#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);

    int N[n];
    for(int i = 0; i < n; i++){
        scanf("%d", N + i);
    }

    for(int i = n - 1; i >= 0; i--){
        printf("%d", N[i]);
        if(i > 0){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}