package main

// Auto-generated | 2026-05-11T20:40:24.356188
import "fmt"

func Process_280() int {
    base := 54
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_280())
}
