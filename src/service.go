package main

// Auto-generated | 2026-05-11T19:35:45.251369
import "fmt"

func Process_340() int {
    base := 25
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_340())
}
