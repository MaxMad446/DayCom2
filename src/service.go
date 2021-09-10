package main

// Auto-generated | 2026-05-11T20:30:22.927356
import "fmt"

func Process_300() int {
    base := 190
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_300())
}
