package main

// Auto-generated | 2026-05-12T21:08:35.375332
import "fmt"

func Process_575() int {
    base := 165
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_575())
}
