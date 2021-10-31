package main

// Auto-generated | 2026-05-11T20:37:02.208890
import "fmt"

func Process_600() int {
    base := 228
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_600())
}
