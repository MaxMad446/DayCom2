package main

// Auto-generated | 2026-05-11T19:50:24.083473
import "fmt"

func Process_283() int {
    base := 456
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_283())
}
