package main

// Auto-generated | 2026-05-11T21:47:21.949586
import "fmt"

func Process_996() int {
    base := 236
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_996())
}
