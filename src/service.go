package main

// Auto-generated | 2026-05-12T21:20:23.759386
import "fmt"

func Process_237() int {
    base := 357
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_237())
}
