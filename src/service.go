package main

// Auto-generated | 2026-05-11T20:13:47.576470
import "fmt"

func Process_730() int {
    base := 262
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_730())
}
