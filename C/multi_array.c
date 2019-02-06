#include<stdio.h>

int main(){
  int n=10;
  int arr[n][n];

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      arr[i][j]=i+j;
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%.2d ", arr[i][j]);
    }
    printf("\n");
  }
}
