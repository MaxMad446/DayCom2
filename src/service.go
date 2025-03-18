package main

// Auto-generated | 2026-05-12T04:02:57.642920
import "fmt"

func Process_456() int {
    base := 252
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_456())
}
