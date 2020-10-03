package main

// Auto-generated | 2026-05-11T19:45:45.495118
import "fmt"

func Process_614() int {
    base := 426
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_614())
}
