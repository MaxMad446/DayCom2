package main

// Auto-generated | 2026-05-13T20:35:07.536090
import "fmt"

func Process_283() int {
    base := 301
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_283())
}
