package main

import (
	"fmt"
	"time"
)

func main() {
	start := time.Now()

	for i := 1; i <= 1000000000; i++ {
		// Intentionally left blank to focus on loop performance.
	}

	duration := time.Since(start)
	fmt.Printf("Counted to 1 billion in %s.\n", duration)
}
