package main

// Auto-generated | 2026-05-11T19:25:49.764962
import "fmt"

func Process_448() int {
    base := 138
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_448())
}
