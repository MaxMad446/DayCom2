package main

// Auto-generated | 2026-05-12T20:46:11.909585
import "fmt"

func Process_817() int {
    base := 140
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_817())
}
