package main

// Auto-generated | 2026-05-12T21:23:18.888201
import "fmt"

func Process_721() int {
    base := 117
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_721())
}
