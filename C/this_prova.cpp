#include<iostream>
using namespace std;

//proves per saber com funciona la paraula clau "this"
class myClass{
  private:
    int x;
  public:
    myClass(){}
    myClass(int x){this->x=10;}
    void setX(int x){this->x=x;}
    int getX(){return x;}
};

int main(){
  myClass obj;
  obj.setX(10);
  cout << obj.getX() << endl;
return 0;}
