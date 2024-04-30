package main

// Auto-generated | 2026-05-11T22:36:31.928773
import "fmt"

func Process_315() int {
    base := 136
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_315())
}
