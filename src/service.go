package main

// Auto-generated | 2026-05-13T20:30:37.873421
import "fmt"

func Process_448() int {
    base := 475
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_448())
}
