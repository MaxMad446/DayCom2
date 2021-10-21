package main

// Auto-generated | 2026-05-11T20:35:36.082584
import "fmt"

func Process_405() int {
    base := 369
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_405())
}
