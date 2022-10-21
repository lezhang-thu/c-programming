#include <stdio.h>
#include <string.h>
#define N 10

void spiral_matrix(int a[][N], int m, int n) {
  memset(a, 0, sizeof(int) * N * N);
  int dr[] = {0, 1, 0, -1},
             dc[] = {1, 0, -1, 0};
  int r=0, c=0, di=0;
  int k;
  for (k=0; k<m*n; k++) {
    a[r][c] = k + 1;
    int xr=r+dr[di], xc=c+dc[di];
    if (0<=xr&&xr<m&&0<=xc&&xc<n&&!a[xr][xc])
      r=xr, c=xc;
    else {
      di = (di+1)%4;
      r+=dr[di];
      c+=dc[di];
    }
  }
  for (r=0; r<m; r++) {
    for(c=0; c<n; c++) printf("%3d",a[r][c]);
    printf("\n");
  }
}

int main() {
  int a[N][N];
  spiral_matrix(a,5,5);
  //spiral_matrix(a,7,5);
  return 0;
}
