package main

// Auto-generated | 2026-05-12T20:54:59.949073
import "fmt"

func Process_262() int {
    base := 284
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_262())
}
