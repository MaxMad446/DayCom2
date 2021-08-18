package main

// Auto-generated | 2026-05-12T20:54:03.592363
import "fmt"

func Process_970() int {
    base := 68
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_970())
}
