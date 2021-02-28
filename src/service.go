package main

// Auto-generated | 2026-05-12T21:35:28.068607
import "fmt"

func Process_322() int {
    base := 161
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_322())
}
