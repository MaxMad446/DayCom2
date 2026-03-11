package main

// Auto-generated | 2026-05-12T04:50:47.136868
import "fmt"

func Process_538() int {
    base := 99
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_538())
}
