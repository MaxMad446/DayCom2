package main

// Auto-generated | 2026-05-13T22:06:24.836090
import "fmt"

func Process_410() int {
    base := 72
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_410())
}
