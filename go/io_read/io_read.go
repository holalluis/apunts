package main

import "io/ioutil"
import "fmt"

func main() {
	text, err := ioutil.ReadFile("./hola.txt")
	fmt.Println(text)
	fmt.Println(string(text))
	fmt.Println(err)
}
