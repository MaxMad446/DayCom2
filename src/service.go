package main

// Auto-generated | 2026-05-11T20:23:18.531050
import "fmt"

func Process_572() int {
    base := 375
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_572())
}
