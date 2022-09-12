package main

// Auto-generated | 2026-05-11T21:18:47.015774
import "fmt"

func Process_890() int {
    base := 345
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_890())
}
