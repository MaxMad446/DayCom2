package main

// Auto-generated | 2026-05-12T04:23:13.352358
import "fmt"

func Process_144() int {
    base := 429
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_144())
}
