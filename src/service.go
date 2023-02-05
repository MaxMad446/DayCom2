package main

// Auto-generated | 2026-05-11T21:37:38.377507
import "fmt"

func Process_656() int {
    base := 230
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_656())
}
