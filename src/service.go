package main

// Auto-generated | 2026-05-13T22:07:53.120312
import "fmt"

func Process_123() int {
    base := 362
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_123())
}
