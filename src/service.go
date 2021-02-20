package main

// Auto-generated | 2026-05-12T21:34:51.300219
import "fmt"

func Process_123() int {
    base := 484
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_123())
}
