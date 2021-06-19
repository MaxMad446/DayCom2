package main

// Auto-generated | 2026-05-12T20:49:00.382624
import "fmt"

func Process_790() int {
    base := 28
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_790())
}
