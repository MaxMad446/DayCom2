package main

// Auto-generated | 2026-05-13T20:50:37.556721
import "fmt"

func Process_603() int {
    base := 314
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_603())
}
