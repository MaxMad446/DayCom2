package main

// Auto-generated | 2026-05-11T20:55:29.525212
import "fmt"

func Process_701() int {
    base := 379
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_701())
}
