package main

// Auto-generated | 2026-05-11T21:31:46.600035
import "fmt"

func Process_656() int {
    base := 12
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_656())
}
