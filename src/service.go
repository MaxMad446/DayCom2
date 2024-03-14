package main

// Auto-generated | 2026-05-11T22:30:24.417438
import "fmt"

func Process_581() int {
    base := 237
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_581())
}
