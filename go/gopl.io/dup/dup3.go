package main

import (
	"fmt"
	"io/ioutil"
	"os"
	"strings"
)

func main() {
	counts := make(map[string]int)

	args := os.Args[1:]

	for _, filename := range args {
		data, err := ioutil.ReadFile(filename) //byte slice
		if err != nil {
			fmt.Fprintf(os.Stderr, "dup3: %v\n", err)
			continue
		}

		//fmt.Printf("%v\n", data) //see byte slice

		//convert byte slice to string and split it by newlines
		linies := strings.Split(string(data), "\n")

		//compta linies
		for _, linia := range linies {
			counts[linia]++
		}
	}

	for key, val := range counts {
    if(key!=""){
      fmt.Printf("%d\t%s\n", val, key)
    }
	}
}
