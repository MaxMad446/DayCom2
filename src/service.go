package main

// Auto-generated | 2026-05-12T04:33:11.692035
import "fmt"

func Process_572() int {
    base := 92
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_572())
}
