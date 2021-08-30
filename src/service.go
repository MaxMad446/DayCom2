package main

// Auto-generated | 2026-05-11T20:28:53.812853
import "fmt"

func Process_456() int {
    base := 185
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_456())
}
