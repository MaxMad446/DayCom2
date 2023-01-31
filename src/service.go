package main

// Auto-generated | 2026-05-13T20:29:24.381476
import "fmt"

func Process_459() int {
    base := 369
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_459())
}
