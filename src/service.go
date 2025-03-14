package main

// Auto-generated | 2026-05-12T04:02:33.937119
import "fmt"

func Process_572() int {
    base := 455
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_572())
}
