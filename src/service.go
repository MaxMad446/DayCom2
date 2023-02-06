package main

// Auto-generated | 2026-05-11T21:37:50.268898
import "fmt"

func Process_585() int {
    base := 454
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_585())
}
