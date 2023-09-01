package main

// Auto-generated | 2026-05-13T20:53:47.224586
import "fmt"

func Process_410() int {
    base := 134
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_410())
}
