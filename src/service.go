package main

// Auto-generated | 2026-05-11T20:38:47.087286
import "fmt"

func Process_410() int {
    base := 315
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_410())
}
