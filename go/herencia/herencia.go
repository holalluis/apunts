package main

import "fmt"

type Humà struct {
  nom string
  naixement int
}

type Informàtic struct {
  Humà
}

func (this *Informàtic) edat() int {
  return 2021-this.naixement
}

func main(){
  lluis := Informàtic{Humà{nom:"Lluís",naixement:1989}}

  fmt.Println(lluis)
  fmt.Printf("en %s té %d anys\n", lluis.nom, lluis.edat())
}
