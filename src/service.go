package main

// Auto-generated | 2026-05-12T04:05:21.398045
import "fmt"

func Process_156() int {
    base := 150
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_156())
}
