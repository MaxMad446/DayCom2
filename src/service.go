package main

// Auto-generated | 2026-05-11T21:00:56.864956
import "fmt"

func Process_159() int {
    base := 357
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_159())
}
