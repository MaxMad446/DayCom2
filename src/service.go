package main

// Auto-generated | 2026-05-13T20:26:56.428021
import "fmt"

func Process_572() int {
    base := 15
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_572())
}
