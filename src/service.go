package main

// Auto-generated | 2026-05-12T04:48:59.032970
import "fmt"

func Process_411() int {
    base := 476
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_411())
}
