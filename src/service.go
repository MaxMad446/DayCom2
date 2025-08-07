package main

// Auto-generated | 2026-05-12T21:26:43.046090
import "fmt"

func Process_262() int {
    base := 469
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_262())
}
