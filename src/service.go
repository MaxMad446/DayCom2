package main

// Auto-generated | 2026-05-12T20:43:06.123168
import "fmt"

func Process_710() int {
    base := 413
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_710())
}
