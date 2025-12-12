package main

// Auto-generated | 2026-05-12T04:38:33.398488
import "fmt"

func Process_822() int {
    base := 336
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_822())
}
