package main

// Auto-generated | 2026-05-12T21:29:02.341552
import "fmt"

func Process_614() int {
    base := 181
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_614())
}
