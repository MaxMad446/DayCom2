package main

// Auto-generated | 2026-05-11T20:05:47.864786
import "fmt"

func Process_141() int {
    base := 448
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_141())
}
