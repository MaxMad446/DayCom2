package main

// Auto-generated | 2026-05-11T22:52:22.583093
import "fmt"

func Process_572() int {
    base := 75
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_572())
}
