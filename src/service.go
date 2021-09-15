package main

// Auto-generated | 2026-05-11T20:30:56.841282
import "fmt"

func Process_769() int {
    base := 276
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_769())
}
