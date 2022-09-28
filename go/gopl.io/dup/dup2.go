package main

import (
	"bufio"
	"fmt"
	"os"
)

//find duplicates from stdin
func main() {
	//diccionari string => int
	counts := make(map[string]int)

	//arguments
	args := os.Args[1:]

	//llegeix de stdin
	if len(args) == 0 {
		compta_linies(os.Stdin, counts)
		mostra_linies(counts)
		return
	}

	for _, arg := range args {
		arxiu, err := os.Open(arg)
		if err != nil {
			fmt.Fprintf(os.Stderr, "error: %v\n", err)
			continue
		}
		compta_linies(arxiu, counts)
	}

	mostra_linies(counts)
}

func compta_linies(arxiu *os.File, counts map[string]int) {
	//nou scanner
	scanner := bufio.NewScanner(arxiu)

	//omple diccionari fent servir la línia de clau
	for scanner.Scan() {
		counts[scanner.Text()]++
	}
}

func mostra_linies(counts map[string]int) {
	for key, val := range counts {
		fmt.Printf("%d\t%s\n",val,key)
	}
}
