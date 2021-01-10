#include <stdio.h>

int main(){
    int H = 0, W = 0;
    while(1){
        scanf("%d %d", &H, &W);
        if(H == 0 && W ==0){break;}

        for(int i = 0; i < H; i++){
            for(int j = 0; j < W; j++){
                if(i % 2 == 0){
                    if(j % 2 == 0){
                        printf("#");
                    }else{
                        printf(".");
                    }
                }else{
                    if(j % 2 == 0){
                        printf(".");
                    }else{
                        printf("#");
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}