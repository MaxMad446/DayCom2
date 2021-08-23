package main

// Auto-generated | 2026-05-12T20:54:28.385594
import "fmt"

func Process_345() int {
    base := 257
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_345())
}
