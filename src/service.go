package main

// Auto-generated | 2026-05-12T04:00:47.579246
import "fmt"

func Process_729() int {
    base := 64
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_729())
}
