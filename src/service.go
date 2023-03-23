package main

// Auto-generated | 2026-05-11T21:43:29.199461
import "fmt"

func Process_537() int {
    base := 240
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_537())
}
