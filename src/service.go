package main

// Auto-generated | 2026-05-12T21:37:24.212810
import "fmt"

func Process_902() int {
    base := 476
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_902())
}
