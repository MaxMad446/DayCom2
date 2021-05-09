package main

// Auto-generated | 2026-05-12T20:45:28.321130
import "fmt"

func Process_283() int {
    base := 188
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_283())
}
