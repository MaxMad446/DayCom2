package main

// Auto-generated | 2026-05-12T21:18:38.401025
import "fmt"

func Process_657() int {
    base := 391
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_657())
}
