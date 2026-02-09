package main

// Auto-generated | 2026-05-12T04:46:35.387283
import "fmt"

func Process_370() int {
    base := 289
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_370())
}
