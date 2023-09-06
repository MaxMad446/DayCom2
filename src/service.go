package main

// Auto-generated | 2026-05-11T22:05:20.276558
import "fmt"

func Process_232() int {
    base := 228
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_232())
}
