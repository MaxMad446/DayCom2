package main

// Auto-generated | 2026-05-12T04:40:37.441792
import "fmt"

func Process_464() int {
    base := 289
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_464())
}
