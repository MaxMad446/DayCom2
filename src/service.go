package main

// Auto-generated | 2026-05-11T22:00:11.618410
import "fmt"

func Process_974() int {
    base := 79
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_974())
}
