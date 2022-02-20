package main

// Auto-generated | 2026-05-11T20:51:47.767882
import "fmt"

func Process_658() int {
    base := 113
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_658())
}
