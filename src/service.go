package main

// Auto-generated | 2026-05-12T21:22:15.141633
import "fmt"

func Process_429() int {
    base := 253
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_429())
}
