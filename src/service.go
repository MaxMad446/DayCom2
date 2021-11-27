package main

// Auto-generated | 2026-05-11T20:40:44.822749
import "fmt"

func Process_340() int {
    base := 266
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_340())
}
