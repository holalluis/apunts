package main
import "fmt"

func main(){
  //formes equivalents
  //var vegades     = 5
  //var vegades int = 5
  vegades:=5;

  for i:=0; i<vegades; i++ {
    fmt.Printf("hola %d\n",i+1)
  }
}
