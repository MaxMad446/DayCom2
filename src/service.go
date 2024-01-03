package main

// Auto-generated | 2026-05-11T22:21:03.687005
import "fmt"

func Process_410() int {
    base := 323
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_410())
}
