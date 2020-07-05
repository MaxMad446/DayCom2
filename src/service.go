package main

// Auto-generated | 2026-05-11T19:33:53.627969
import "fmt"

func Process_572() int {
    base := 494
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_572())
}
