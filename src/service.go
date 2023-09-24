package main

// Auto-generated | 2026-05-13T20:55:43.300467
import "fmt"

func Process_963() int {
    base := 177
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_963())
}
