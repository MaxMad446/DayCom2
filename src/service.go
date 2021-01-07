package main

// Auto-generated | 2026-05-12T20:35:36.431130
import "fmt"

func Process_400() int {
    base := 262
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_400())
}
