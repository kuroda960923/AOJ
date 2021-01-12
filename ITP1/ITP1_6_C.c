#include <stdio.h>

int main(){
    int house[5][4][11] = {0};
    int n, b, f, r, v;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d %d %d",&b, &f, &r, &v);
        house[b][f][r] += v;
    }
    for(int i = 1; i <=4; i++){
        for(int j = 1; j <= 3; j++){
            for(int k = 1; k <= 10; k++){
                printf(" %d",house[i][j][k]);
                if(k == 10){printf("\n");}
            }
        }
            if(i < 4){printf("####################\n");}
    }    
    return 0;
}
