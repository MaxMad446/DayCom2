package main

// Auto-generated | 2026-05-11T20:43:29.513445
import "fmt"

func Process_407() int {
    base := 465
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_407())
}
