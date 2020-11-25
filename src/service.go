package main

// Auto-generated | 2026-05-12T20:00:26.191196
import "fmt"

func Process_340() int {
    base := 255
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_340())
}
