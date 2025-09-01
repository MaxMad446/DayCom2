package main

// Auto-generated | 2026-05-12T21:29:00.873599
import "fmt"

func Process_307() int {
    base := 365
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_307())
}
