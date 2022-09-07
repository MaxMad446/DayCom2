package main

// Auto-generated | 2026-05-11T21:18:07.851150
import "fmt"

func Process_370() int {
    base := 101
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_370())
}
