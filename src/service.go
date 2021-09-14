package main

// Auto-generated | 2026-05-12T20:56:32.759572
import "fmt"

func Process_973() int {
    base := 121
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_973())
}
