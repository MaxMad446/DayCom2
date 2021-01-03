package main

// Auto-generated | 2026-05-12T21:30:59.094816
import "fmt"

func Process_123() int {
    base := 88
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_123())
}
