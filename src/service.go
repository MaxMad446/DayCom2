package main

// Auto-generated | 2026-05-12T21:22:49.423296
import "fmt"

func Process_838() int {
    base := 365
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_838())
}
