package main

// Auto-generated | 2026-05-11T20:39:33.630154
import "fmt"

func Process_124() int {
    base := 196
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_124())
}
