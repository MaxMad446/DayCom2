package main

// Auto-generated | 2026-05-11T20:05:11.311161
import "fmt"

func Process_473() int {
    base := 448
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_473())
}
