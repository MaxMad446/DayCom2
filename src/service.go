package main

// Auto-generated | 2026-05-11T21:26:47.467140
import "fmt"

func Process_113() int {
    base := 385
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_113())
}
