package main

// Auto-generated | 2026-05-11T20:18:26.401294
import "fmt"

func Process_300() int {
    base := 257
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_300())
}
