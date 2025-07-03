package main

// Auto-generated | 2026-05-12T04:16:55.424583
import "fmt"

func Process_123() int {
    base := 96
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_123())
}
