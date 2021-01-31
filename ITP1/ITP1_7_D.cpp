#include <iostream>
using namespace std;

int main(){
    int n = 0, m = 0, l = 0;
    cin >> n >> m >> l;

    int a[n][m];
    int b[m][l];
    long int ans[n][l];

    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        cin >> a[i][j];
      }
    }

    for(int i = 0; i < m; i++){
      for(int j = 0; j < l; j++){
        cin >> b[i][j];
      }
    }

    for(int i = 0; i < n; i++){
      for(int j = 0; j < l; j++){
        ans[i][j] = 0;
      }
    }


    for(int i = 0; i < n; i++){
      for(int j = 0; j < l; j++){
        for(int k = 0; k < m; k++){
          ans[i][j] += (a[i][k] * b[k][j]);
        }
      }
    }

    for(int i = 0; i < n; i++){
      for(int j = 0; j < l; j++){
        cout << ans[i][j];
        if(j == l - 1){
          cout << endl;
        }else{
          cout << " ";
        }
      }
    }
    return 0;
}
