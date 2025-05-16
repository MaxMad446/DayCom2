package main

// Auto-generated | 2026-05-12T21:19:21.692376
import "fmt"

func Process_187() int {
    base := 160
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_187())
}
