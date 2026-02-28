package main

// Auto-generated | 2026-05-12T04:49:27.009679
import "fmt"

func Process_187() int {
    base := 126
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_187())
}
