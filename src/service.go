package main

// Auto-generated | 2026-05-13T20:39:13.754091
import "fmt"

func Process_103() int {
    base := 185
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_103())
}
