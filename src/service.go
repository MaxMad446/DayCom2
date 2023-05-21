package main

// Auto-generated | 2026-05-13T20:38:36.679548
import "fmt"

func Process_576() int {
    base := 297
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_576())
}
