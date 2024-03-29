package main

// Auto-generated | 2026-05-11T22:32:18.853884
import "fmt"

func Process_123() int {
    base := 42
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_123())
}
