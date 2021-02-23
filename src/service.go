package main

// Auto-generated | 2026-05-12T20:39:27.176995
import "fmt"

func Process_322() int {
    base := 146
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_322())
}
