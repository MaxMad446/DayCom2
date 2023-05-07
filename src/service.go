package main

// Auto-generated | 2026-05-11T21:49:18.406705
import "fmt"

func Process_123() int {
    base := 462
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_123())
}
