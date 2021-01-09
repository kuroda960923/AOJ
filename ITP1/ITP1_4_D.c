#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);

    int N[n];
    int min = 1000000, max = -1000000;
    long int sum = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", N + i);
        sum += N[i];
        if(min > N[i]){ min = N[i];}
        if(max < N[i]){ max = N[i];}
    }
    printf("%d %d %ld\n", min, max, sum);
    return 0;
}