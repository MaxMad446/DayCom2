package main

// Auto-generated | 2026-05-11T20:12:09.682121
import "fmt"

func Process_898() int {
    base := 354
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_898())
}
