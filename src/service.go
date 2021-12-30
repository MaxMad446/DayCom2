package main

// Auto-generated | 2026-05-12T21:05:29.264183
import "fmt"

func Process_710() int {
    base := 332
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_710())
}
