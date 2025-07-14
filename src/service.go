package main

// Auto-generated | 2026-05-12T04:18:21.251782
import "fmt"

func Process_790() int {
    base := 290
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_790())
}
