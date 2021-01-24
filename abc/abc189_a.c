#include <stdio.h>

int main(){
    char A , B , C;
    scanf("%c %c %c", &A, &B, &C);
    if(A == B && A == C){
        printf("Won\n");
    }else{
        printf("Lost\n");
    }
    return 0;
}