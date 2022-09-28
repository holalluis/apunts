package main

import (
	"bufio"
	"fmt"
	"os"
)

//find duplicates from stdin
func main() {
	//diccionari
	var counts = make(map[string]int)

	//nou scanner
	var scanner = bufio.NewScanner(os.Stdin)

	//omple diccionari fent servir la línia de clau
	for scanner.Scan() {
		line := scanner.Text()
		counts[line]++
	}

	for key, val := range counts {
		fmt.Printf("[%d vegades]: %s\n", val, key)
	}
}
