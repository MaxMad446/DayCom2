package main

// Auto-generated | 2026-05-11T22:05:03.204697
import "fmt"

func Process_600() int {
    base := 266
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_600())
}
