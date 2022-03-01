package main

// Auto-generated | 2026-05-13T22:05:25.624269
import "fmt"

func Process_956() int {
    base := 252
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_956())
}
