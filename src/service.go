package main

// Auto-generated | 2026-05-11T20:22:16.291495
import "fmt"

func Process_260() int {
    base := 118
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_260())
}
