//https://www.youtube.com/watch?v=VOpjAHCee7c
#include<stdio.h>
#include<stdlib.h>

//classe Node
struct node {
  int valor;
  struct node *next;
};
typedef struct node Node;

//function print_list
void print_list(Node *head){
  Node *tmp = head;
  while(1){
    printf("%d", tmp->valor);
    tmp=tmp->next;
    if(tmp==NULL) break;
    else printf("-"); //draw a "link"
  }
  printf("\n");
}

//function new Node
Node *new_Node(int valor){
  Node *new = malloc(sizeof(Node));
  new->valor=valor;
  new->next=NULL;
  return new;
}

//function insert_at_tail
void insert_at_tail(Node **tail, Node *node){
  (*tail)->next = node;
  *tail = node;
}

//troba un node que tingui un valor concret
Node *find_node(Node *head, int valor_buscat){
  Node *tmp = head;
  while(tmp!=NULL){
    if(tmp->valor == valor_buscat){
      return tmp;
    }
    tmp = tmp->next;
  }
  return NULL;
}

//inserta un node després d'un altre
void insert_after_node(Node *node, Node *nou_node){
  nou_node->next = node->next; //node on apuntava el node original
  node->next = nou_node;
}

//main
int main(){
  Node *head = new_Node(1); //start of list
  Node *tail = head; //init tail at head

  //add some nodes
  for(int i=1+head->valor;i<25;i++){
    Node *node = new_Node(i);
    insert_at_tail(&tail, node);
  }

  //busca un node que tingui el valor 13
  Node *n_buscat = find_node(head,13);
  if(n_buscat){
    printf("node amb valor %d trobat!\n",n_buscat->valor);

    //crea un node i inserta'l després del trobat
    insert_after_node(n_buscat, new_Node(42));
  }

  print_list(head);
  return 0;
}
