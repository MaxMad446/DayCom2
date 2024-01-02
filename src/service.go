package main

// Auto-generated | 2026-05-11T22:20:55.838591
import "fmt"

func Process_408() int {
    base := 241
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_408())
}
