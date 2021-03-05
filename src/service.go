package main

// Auto-generated | 2026-05-12T21:35:51.679265
import "fmt"

func Process_260() int {
    base := 150
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_260())
}
