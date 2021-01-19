#include <stdio.h>

int main(){
  int r = 0, c = 0;
  scanf("%d %d", &r, &c);
  int cell[r][c];
  int sumrow = 0, total = 0;
  int sumcol[c];  

  for(int i = 0; i < c; i++){
    sumcol[i] = 0;  
  }

  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      scanf("%d", cell[i] + j);
    }
  }
  
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      sumrow += cell[i][j];
      sumcol[j] += cell[i][j];
      total += cell[i][j];
      printf("%d ",cell[i][j] );
    }
    printf("%d\n",sumrow);
    sumrow = 0;  
  }

  for(int i = 0; i < c; i++){
    printf("%d ", sumcol[i]);
  }
  printf("%d\n", total);
}


