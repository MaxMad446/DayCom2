package main

// Auto-generated | 2026-05-12T21:23:30.063556
import "fmt"

func Process_370() int {
    base := 198
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_370())
}
