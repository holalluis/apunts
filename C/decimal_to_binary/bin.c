#include <stdio.h>

//assign one byte for each bit + '0' + 'b' + '\0'
#define TOTAL_BYTES 8*sizeof(int)+3

//convert int to binary string
void bin(int n, char *buf){
  //zero is a special case because it is not trimmed
  if(n==0){
    buf[2]='0';
    buf[3]='\0';
    return;
  }

  //start masking with 1 at byte 3 until the one before the last one
  for(int i=2; i<TOTAL_BYTES-1; i++){
    buf[TOTAL_BYTES-i] = (n>>(i-2)) & 1 ? '1':'0';
  }

  /*trim the resulting string*/

  //find first non zero byte position
  int first_non_zero_byte=0;
  for(int i=2; i<TOTAL_BYTES-1; i++){
    if(buf[i]!='0'){
      first_non_zero_byte = i;
      break;
    }
  }

  //if first_non_zero_byte is the third byte, do nothing else
  if(first_non_zero_byte==2){ return; }

  //move positions using first non zero position found
  for(int i=0; i<TOTAL_BYTES-1; i++){
    buf[i+2]=buf[first_non_zero_byte+i];
  }

  //finally add string termination character
  buf[TOTAL_BYTES-first_non_zero_byte+1]='\0';
}

//main
int main(){
  //init buffer at n=0;
  char buf[TOTAL_BYTES];
  buf[0]='0';              //first byte
  buf[1]='b';              //second byte
  buf[TOTAL_BYTES-1]='\0'; //last byte: string termination byte '\0'

  for(int i=0;i<=0xffff;i++){
    bin(i,buf); //modify buf
    printf("%d \t %s\n",i,buf);
  }

  return 0;
}

