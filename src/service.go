package main

// Auto-generated | 2026-05-11T20:39:37.847518
import "fmt"

func Process_847() int {
    base := 52
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_847())
}
