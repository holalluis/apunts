#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

//This is the function that will be executed by the new thread
void* thread_function(void* arg) {
  //Do some work here...
  printf("Hello from the new thread!\n");
  return NULL;
}

int main() {
  pthread_t thread;

  //Create the new thread
  int result = pthread_create(&thread, NULL, thread_function, NULL);
  if (result != 0) {
    fprintf(stderr, "Error creating thread\n");
    return 1;
  }

  //Do some work in the main thread
  printf("Hello from the main thread!\n");

  //Wait for the new thread to finish
  pthread_join(thread, NULL);

  return 0;
}
