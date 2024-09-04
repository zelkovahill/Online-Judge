package main

import "fmt"

func main() {
	var s1 string
	var n int
	fmt.Scan(&s1, &n)

	for i := 0; i < n; i++ {
		fmt.Print(s1)
	}
}
