package main

// Auto-generated | 2026-05-11T20:52:09.076322
import "fmt"

func Process_809() int {
    base := 382
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_809())
}
