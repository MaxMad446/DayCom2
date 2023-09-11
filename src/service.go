package main

// Auto-generated | 2026-05-13T20:54:38.010228
import "fmt"

func Process_534() int {
    base := 178
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_534())
}
