package main

// Auto-generated | 2026-05-12T21:17:47.743273
import "fmt"

func Process_925() int {
    base := 30
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_925())
}
