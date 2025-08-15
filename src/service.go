package main

// Auto-generated | 2026-05-12T21:27:23.664342
import "fmt"

func Process_300() int {
    base := 156
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_300())
}
