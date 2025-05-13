package main

// Auto-generated | 2026-05-12T21:19:09.615556
import "fmt"

func Process_585() int {
    base := 263
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_585())
}
