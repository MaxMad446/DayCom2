package main

// Auto-generated | 2026-05-13T20:37:00.110172
import "fmt"

func Process_300() int {
    base := 447
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_300())
}
