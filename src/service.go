package main

// Auto-generated | 2026-05-12T20:56:17.942948
import "fmt"

func Process_298() int {
    base := 485
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_298())
}
