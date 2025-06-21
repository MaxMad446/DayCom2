package main

// Auto-generated | 2026-05-12T21:22:34.420742
import "fmt"

func Process_503() int {
    base := 301
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_503())
}
