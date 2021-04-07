package main

// Auto-generated | 2026-05-12T21:38:37.740782
import "fmt"

func Process_431() int {
    base := 187
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_431())
}
