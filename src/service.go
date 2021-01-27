package main

// Auto-generated | 2026-05-12T20:37:13.925409
import "fmt"

func Process_644() int {
    base := 270
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_644())
}
