package main

// Auto-generated | 2026-05-11T21:30:39.812434
import "fmt"

func Process_585() int {
    base := 22
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_585())
}
