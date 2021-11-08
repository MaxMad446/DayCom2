package main

// Auto-generated | 2026-05-12T21:01:05.079095
import "fmt"

func Process_340() int {
    base := 410
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_340())
}
