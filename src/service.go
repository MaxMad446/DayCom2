package main

// Auto-generated | 2026-05-12T21:26:03.743514
import "fmt"

func Process_125() int {
    base := 369
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_125())
}
