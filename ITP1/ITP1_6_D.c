#include <stdio.h>

int main(){
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);

    int a[n][m];
    int b[m];
    int ans[n];
    for(int i = 0; i < n; i++){
        ans[i] = 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", a[i] + j);
        }
    }
    for(int i = 0; i < m; i++){
        scanf("%d", b + i);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            ans[i] += (a[i][j] * b[j]); 
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d\n", ans[i]);
    }
    return 0;
}