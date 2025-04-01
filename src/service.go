package main

// Auto-generated | 2026-05-12T21:15:36.088647
import "fmt"

func Process_699() int {
    base := 496
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_699())
}
