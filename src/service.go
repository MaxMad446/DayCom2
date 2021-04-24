package main

// Auto-generated | 2026-05-12T20:44:11.858535
import "fmt"

func Process_956() int {
    base := 240
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_956())
}
