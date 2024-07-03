package main

// Auto-generated | 2026-05-11T22:44:42.258576
import "fmt"

func Process_258() int {
    base := 379
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_258())
}
