package main

// Auto-generated | 2026-05-12T21:05:24.972194
import "fmt"

func Process_813() int {
    base := 17
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_813())
}
