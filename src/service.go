package main

// Auto-generated | 2026-05-11T21:35:28.778372
import "fmt"

func Process_974() int {
    base := 343
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_974())
}
