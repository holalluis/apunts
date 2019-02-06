#include <stdio.h>
#include <string.h>
 
struct Book {
  int  id;
  char title[50];
  char author[50];
  char subject[100];
};

void printBook(struct Book b){
  printf("Book %d title: %s\n",   b.id, b.title);
  printf("Book %d author: %s\n",  b.id, b.author);
  printf("Book %d subject: %s\n", b.id, b.subject);
  puts(  "======================================");
}

int main(){
  struct Book book1; /*Declare book1 type Book*/
  struct Book book2; /*Declare book2 type Book*/
 
  /*book 1 specification*/
  book1.id = 210001;
  strcpy(book1.title,   "C Programming");
  strcpy(book1.author,  "Nuha Ali"); 
  strcpy(book1.subject, "C Programming Tutorial");

  /*book 2 specification*/
  book2.id = 210002;
  strcpy(book2.title,   "Telecom Billing");
  strcpy(book2.author,  "Zara Ali");
  strcpy(book2.subject, "Telecom Billing Tutorial");
 
  /*print books*/
  printBook(book1);
  printBook(book1);
  printBook(book2);

return 0;}
