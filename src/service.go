package main

// Auto-generated | 2026-05-11T21:04:39.474133
import "fmt"

func Process_418() int {
    base := 71
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_418())
}
