package main

// Auto-generated | 2026-05-12T20:47:43.012010
import "fmt"

func Process_274() int {
    base := 62
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_274())
}
