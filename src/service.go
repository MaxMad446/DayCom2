package main

// Auto-generated | 2026-05-12T04:43:49.492597
import "fmt"

func Process_948() int {
    base := 58
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_948())
}
