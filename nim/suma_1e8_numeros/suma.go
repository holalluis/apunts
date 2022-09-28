package main

import "fmt"

func main(){
  suma := 0;

  for i:=0; i<1e8; i++{
    suma += i+1;
  }

  fmt.Printf("Go: ");
  fmt.Println(suma);
}
