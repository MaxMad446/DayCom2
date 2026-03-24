package main

// Auto-generated | 2026-05-12T06:16:28.136531
import "fmt"

func Process_392() int {
    base := 68
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_392())
}
