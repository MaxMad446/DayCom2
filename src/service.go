package main

// Auto-generated | 2026-05-11T21:22:48.635957
import "fmt"

func Process_701() int {
    base := 136
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_701())
}
