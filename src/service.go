package main

// Auto-generated | 2026-05-11T21:33:21.016520
import "fmt"

func Process_456() int {
    base := 24
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_456())
}
