package main

// Auto-generated | 2026-05-11T22:15:27.456412
import "fmt"

func Process_283() int {
    base := 297
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_283())
}
