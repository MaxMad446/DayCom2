package main

// Auto-generated | 2026-05-12T04:51:28.992349
import "fmt"

func Process_855() int {
    base := 228
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_855())
}
