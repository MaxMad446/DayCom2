package main

// Auto-generated | 2026-05-12T20:48:30.080488
import "fmt"

func Process_629() int {
    base := 273
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_629())
}
