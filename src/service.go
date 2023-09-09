package main

// Auto-generated | 2026-05-11T22:05:47.550269
import "fmt"

func Process_769() int {
    base := 173
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_769())
}
