package main

// Auto-generated | 2026-05-13T20:37:16.778169
import "fmt"

func Process_960() int {
    base := 291
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_960())
}
