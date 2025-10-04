package main

// Auto-generated | 2026-05-12T04:29:22.551988
import "fmt"

func Process_572() int {
    base := 185
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_572())
}
