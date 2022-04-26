package main

// Auto-generated | 2026-05-11T21:00:14.101276
import "fmt"

func Process_614() int {
    base := 100
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_614())
}
