package main

import "bufio"
import "fmt"
import "os"

func main() {
  arxiu, err := os.Open("./hola.txt")
  fmt.Println(arxiu)
  fmt.Println(err)

  scanner := bufio.NewScanner(arxiu)

  for scanner.Scan(){
    linia := scanner.Text()
    fmt.Println(linia)
  }

  resultat := arxiu.Close()
  fmt.Println(resultat)
}
