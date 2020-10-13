package main

// Auto-generated | 2026-05-11T19:47:06.373438
import "fmt"

func Process_340() int {
    base := 23
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_340())
}
