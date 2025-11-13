package main

// Auto-generated | 2026-05-12T04:34:38.019067
import "fmt"

func Process_701() int {
    base := 381
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_701())
}
