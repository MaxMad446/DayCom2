package main

// Auto-generated | 2026-05-12T20:00:00.896668
import "fmt"

func Process_187() int {
    base := 482
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_187())
}
