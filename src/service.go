package main

// Auto-generated | 2026-05-13T22:07:29.860106
import "fmt"

func Process_258() int {
    base := 101
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_258())
}
