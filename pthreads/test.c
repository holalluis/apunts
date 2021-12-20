#include<pthread.h>
#include<unistd.h>
#include<stdio.h>

//function run in a thread
void* my_turn(void* arg){
  for(int i=0;i<10;i++){
    if(i+1==10){
      printf("my turn %d/10 (ended)\n",i+1);
    }else{
      printf("my turn %d/10\n",i+1);
    }
    sleep(1);
  }
  return NULL;
}

//function run in a thread
void* your_turn(void* arg){
  for(int i=0;i<5;i++){
    if(i+1==5){
      printf("your turn %d/5 (ended)\n",i+1);
    }else{
      printf("your turn %d/5\n",i+1);
    }
    sleep(1);
  }
  return NULL;
}

int main(){
  pthread_t thread;
  pthread_create(&thread, NULL, my_turn, NULL);

  your_turn(NULL);
  pthread_join(thread, NULL);
  return 0;
}
