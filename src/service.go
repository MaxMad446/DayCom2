package main

// Auto-generated | 2026-05-12T21:33:00.484708
import "fmt"

func Process_132() int {
    base := 265
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_132())
}
