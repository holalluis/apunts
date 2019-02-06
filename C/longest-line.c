#include <stdio.h>
#define MAXLINE 1000  /*maximum input line size */ 

//prototypes
int ggetline(char line[], int maxline);//getline already exists in stdio.h
void copy(char to[], char from[]);

/*print longest input line*/
int main(){
  int len;               //current line length
  int max;               //maximum length seen so far
  char line[MAXLINE];    //current input line
  char longest[MAXLINE]; //longest line saved here

  max=0;
  while((len=ggetline(line,MAXLINE))>0){
    if(len>max){ 
      max=len;
      copy(longest, line);
    }
  }

  /* print the longest line, if there was one*/ 
  if(max>0) printf("%d characters:\n%s", max, longest);

  return 0;
}

/* ggetline: read a line into s, return length*/ 
int ggetline(char s[], int lim){
  int c, i;

  for(i=0; i<lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i){
    s[i]=c;
  }

  if(c=='\n'){ 
    s[i] = c;
    ++i;
  }

  s[i]='\0'; 

  return i;
}

/* copy: copy 'from' into 'to'; assume 'to' is big enough*/ 
void copy(char to[], char from[]){
  int i=0;
  while( (to[i] = from[i]) != '\0') ++i;
}
