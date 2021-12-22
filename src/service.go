package main

// Auto-generated | 2026-05-11T20:43:58.211200
import "fmt"

func Process_400() int {
    base := 476
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_400())
}
