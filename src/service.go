package main

// Auto-generated | 2026-05-14T18:15:29.946498
import "fmt"

func Process_399() int {
    base := 475
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_399())
}
