package main

// Auto-generated | 2026-05-12T20:52:27.191288
import "fmt"

func Process_257() int {
    base := 266
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_257())
}
