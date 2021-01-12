#include <stdio.h>
int main(){
    int card[4][14] = {0};
    //0:S, 1:H, 2:C, 3:D
    int n = 0;
    int card_number = 0;
    int mark_number = 0;
    char mark;
    char buf[50];
    scanf("%d\n", &n);

    for(int i = 0; i < n; i++){
        fgets(buf, 30, stdin);       
        sscanf(buf, "%c %d", &mark, &card_number);

        if(mark == 'S'){mark_number = 0;
        }else if(mark == 'H'){mark_number = 1;
        }else if(mark == 'C'){mark_number = 2;
        }else if(mark == 'D'){mark_number = 3;
        }

        card[mark_number][card_number] = 1;
    }

    for(int i = 0; i < 4; i++){
        for(int j = 1; j <= 13 ; j++){
            if(card[i][j] == 0){
                if(i == 0){mark = 'S';
                }else if(i == 1){mark = 'H';
                }else if(i == 2){mark = 'C';
                }else if(i == 3){mark = 'D';
                }
                printf("%c %d\n",mark, j);
            }
        }
    }

    return 0;
}


