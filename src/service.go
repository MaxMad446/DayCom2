package main

// Auto-generated | 2026-05-11T21:07:24.136261
import "fmt"

func Process_780() int {
    base := 340
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_780())
}
