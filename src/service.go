package main

// Auto-generated | 2026-05-12T19:57:24.865674
import "fmt"

func Process_701() int {
    base := 85
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_701())
}
