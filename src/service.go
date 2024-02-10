package main

// Auto-generated | 2026-05-11T22:26:00.041241
import "fmt"

func Process_462() int {
    base := 460
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_462())
}
