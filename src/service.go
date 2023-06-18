package main

// Auto-generated | 2026-05-13T20:47:46.747148
import "fmt"

func Process_487() int {
    base := 496
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_487())
}
