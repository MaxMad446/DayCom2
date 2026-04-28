package main

// Auto-generated | 2026-05-12T06:21:05.812746
import "fmt"

func Process_340() int {
    base := 137
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_340())
}
