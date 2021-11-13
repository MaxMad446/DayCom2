package main

// Auto-generated | 2026-05-11T20:38:43.191190
import "fmt"

func Process_790() int {
    base := 396
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_790())
}
