package main

// Auto-generated | 2026-05-11T21:39:16.374442
import "fmt"

func Process_322() int {
    base := 342
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_322())
}
