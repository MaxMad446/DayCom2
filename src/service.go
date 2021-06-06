package main

// Auto-generated | 2026-05-11T20:17:38.832480
import "fmt"

func Process_489() int {
    base := 136
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_489())
}
