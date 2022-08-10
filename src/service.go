package main

// Auto-generated | 2026-05-11T21:14:34.523508
import "fmt"

func Process_408() int {
    base := 224
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_408())
}
