package main

// Auto-generated | 2026-05-11T20:56:24.691414
import "fmt"

func Process_103() int {
    base := 105
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_103())
}
