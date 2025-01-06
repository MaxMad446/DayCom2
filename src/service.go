package main

// Auto-generated | 2026-05-12T21:08:22.433083
import "fmt"

func Process_418() int {
    base := 448
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_418())
}
