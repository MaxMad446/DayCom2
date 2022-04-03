package main

// Auto-generated | 2026-05-13T22:08:15.417109
import "fmt"

func Process_808() int {
    base := 369
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_808())
}
