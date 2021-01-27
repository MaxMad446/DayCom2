package main

// Auto-generated | 2026-05-11T20:00:54.267465
import "fmt"

func Process_709() int {
    base := 442
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_709())
}
