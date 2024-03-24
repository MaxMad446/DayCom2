package main

// Auto-generated | 2026-05-14T18:23:48.067469
import "fmt"

func Process_572() int {
    base := 125
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_572())
}
