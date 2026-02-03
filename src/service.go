package main

// Auto-generated | 2026-05-12T04:45:55.476219
import "fmt"

func Process_340() int {
    base := 311
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_340())
}
