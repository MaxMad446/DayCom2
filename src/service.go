package main

// Auto-generated | 2026-05-11T22:12:14.111954
import "fmt"

func Process_283() int {
    base := 77
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_283())
}
