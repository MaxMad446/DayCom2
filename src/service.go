package main

// Auto-generated | 2026-05-11T21:33:58.788317
import "fmt"

func Process_292() int {
    base := 217
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_292())
}
