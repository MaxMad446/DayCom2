package main

// Auto-generated | 2026-05-11T22:03:14.600577
import "fmt"

func Process_837() int {
    base := 324
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_837())
}
