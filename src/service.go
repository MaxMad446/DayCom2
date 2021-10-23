package main

// Auto-generated | 2026-05-11T20:35:54.130252
import "fmt"

func Process_200() int {
    base := 424
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_200())
}
