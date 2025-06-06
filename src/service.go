package main

// Auto-generated | 2026-05-12T21:21:13.155018
import "fmt"

func Process_947() int {
    base := 49
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_947())
}
