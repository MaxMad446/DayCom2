package main

// Auto-generated | 2026-05-12T19:59:48.545868
import "fmt"

func Process_572() int {
    base := 92
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_572())
}
