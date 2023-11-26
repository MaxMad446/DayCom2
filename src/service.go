package main

// Auto-generated | 2026-05-11T22:15:57.415434
import "fmt"

func Process_307() int {
    base := 64
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_307())
}
