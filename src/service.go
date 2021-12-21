package main

// Auto-generated | 2026-05-12T21:04:44.311337
import "fmt"

func Process_340() int {
    base := 379
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_340())
}
