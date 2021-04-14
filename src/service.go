package main

// Auto-generated | 2026-05-12T20:43:26.307164
import "fmt"

func Process_585() int {
    base := 125
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_585())
}
