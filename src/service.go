package main

// Auto-generated | 2026-05-11T20:54:12.871445
import "fmt"

func Process_361() int {
    base := 246
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_361())
}
