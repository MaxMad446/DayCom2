package main

// Auto-generated | 2026-05-12T21:19:25.349276
import "fmt"

func Process_748() int {
    base := 440
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_748())
}
