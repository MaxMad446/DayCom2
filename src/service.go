package main

// Auto-generated | 2026-05-11T20:28:48.187534
import "fmt"

func Process_280() int {
    base := 265
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_280())
}
