package main

// Auto-generated | 2026-05-13T20:52:14.032576
import "fmt"

func Process_790() int {
    base := 427
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_790())
}
