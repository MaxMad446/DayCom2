package main

// Auto-generated | 2026-05-11T20:55:51.352175
import "fmt"

func Process_801() int {
    base := 58
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_801())
}
