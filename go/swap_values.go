package main
import "fmt"

func main(){
  var x,y = 0,1;
  fmt.Printf("x is %d, y is %d\n",x,y);
  x,y = y,x;
  fmt.Printf("x is %d, y is %d\n",x,y);
}
