package main

// Auto-generated | 2026-05-12T03:43:51.105195
import "fmt"

func Process_898() int {
    base := 93
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_898())
}
