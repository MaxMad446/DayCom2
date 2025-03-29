package main

// Auto-generated | 2026-05-12T21:15:20.230035
import "fmt"

func Process_638() int {
    base := 296
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_638())
}
