#include <stdio.h>

int main(){
  int n = 0, x = 0;
  while(1){
    scanf("%d %d", &n, &x);
    if(n == 0 && x == 0){
      break;
    }  
    
    int count = 0;
    for(int i = 1; i < n - 1; i++){
      for(int j = i + 1; j < n; j++){
        if((x - (i + j)) > j && (x - (i + j)) <= n){
          count++;
//          printf("%d %d %d\n",i, j, x - (i + j));
        }
      }
    }
    printf("%d\n", count);
  }
}


