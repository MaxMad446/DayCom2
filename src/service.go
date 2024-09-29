package main

// Auto-generated | 2026-05-12T03:40:35.321748
import "fmt"

func Process_435() int {
    base := 358
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_435())
}
