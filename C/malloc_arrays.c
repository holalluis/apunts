#include<stdio.h>
#include<stdlib.h>

//crea array 1d
int* create_int_array(int a_size){ return malloc(a_size*sizeof(int)); }

//modifica array 1d
void fill_int_array(int *a,int a_size){ for(int i=0;i<a_size;i++){ a[i]=(i+1)*10; } }

//print array 1d
void print_int_array(int *a,int a_size){ for(int i=0;i<a_size;i++){ printf("a[%d] = %d\n",i,a[i]); } }

//crea array 2d
int** create_int_matrix(int rows,int cols){
  int** m = malloc(rows*sizeof(int*));
  for(int i=0;i<rows;i++){
    m[i]=malloc(cols*sizeof(int));
  }
  return m;
}

//modifica array 2d
void fill_int_matrix(int **m,int rows,int cols){
  for(int i=0;i<rows;i++){
    for(int j=0;j<rows;j++){
      m[i][j]=i*j;
    }
  }
}

//print array 2d
void print_int_matrix(int **m,int rows,int cols){
  for(int i=0;i<rows;i++){
    for(int j=0;j<rows;j++){
      printf("%.3d ",m[i][j]);
    }
    printf("\n");
  }
}

int main(){
  //create 1d int array
  int length=5;
  int *a = create_int_array(length);
  fill_int_array(a,length);
  print_int_array(a,length);
  free(a);

  //create 2d int matrix
  int rows=12,cols=12;
  int **m = create_int_matrix(rows,cols);
  fill_int_matrix(m,rows,cols);
  print_int_matrix(m,rows,cols);

return 0;}
