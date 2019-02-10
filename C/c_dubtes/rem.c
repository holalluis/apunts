/*
  Proves amb pointers, memòria i arrays
  Desembre de 2016
  http://arjunsreedharan.org/post/69303442896/the-difference-between-arr-and-arr-how-to-find
*/
#include<stdio.h>

int main(){
  //calcular tamany de un int
  int enter = 1;
  printf("Un int ocupa %lu bytes\n",sizeof(enter));
  printf("Està a %p \n\n",&enter);

  //calcular tamany de array
  int arr[] = {10,11,12,13,14};
  int tamany = *(&arr+1)-arr;//manera de no fer servir sizeof
  printf("El tamany de arr és %d, per tant, %lu bytes\n",tamany, tamany*sizeof(enter));
  for(int i=0;i<tamany;i++) {
    printf("arr[%d] val %d. El pointer arr[%d] val: %p\n",i,arr[i],i,&arr[i]);
  }
  printf("Expressió  arr        val: %p\n",arr);
  printf("Expressió  &arr       val: %p\n",&arr);
  printf("Expressió  arr+1      val: %p\n",arr+1);
  printf("Expressió  &arr+1     val: %p\n",&arr+1);
  printf("Expressió  *(&arr)    val: %p\n",*(&arr));
  printf("Expressió  *(&arr+1)  val: %p\n",*(&arr+1));
  printf("Expressió  *(&arr)+1  val: %p\n",*(&arr)+1);

  return 0;
}
