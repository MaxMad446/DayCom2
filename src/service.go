package main

// Auto-generated | 2026-05-12T21:23:16.814763
import "fmt"

func Process_306() int {
    base := 246
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_306())
}
