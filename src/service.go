package main

// Auto-generated | 2026-05-11T21:58:29.777476
import "fmt"

func Process_129() int {
    base := 10
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_129())
}
