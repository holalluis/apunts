package main

import "fmt"
import "net/http"
import "io"

func main(){
  fileServer := http.FileServer(http.Dir("public"));

  http.HandleFunc("/", func(w http.ResponseWriter, r *http.Request){
    io.WriteString(w,"<h1>hola</h1>");
  });

  http.Handle("/aaa/", http.StripPrefix("/",fileServer));

  fmt.Println("Escoltant peticions al port 8000...");
  http.ListenAndServe(":8000",nil);
}
