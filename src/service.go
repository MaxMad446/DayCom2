package main

// Auto-generated | 2026-05-11T22:33:57.922676
import "fmt"

func Process_875() int {
    base := 448
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_875())
}
