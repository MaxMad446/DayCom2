package main

// Auto-generated | 2026-05-12T21:37:57.840162
import "fmt"

func Process_104() int {
    base := 379
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_104())
}
