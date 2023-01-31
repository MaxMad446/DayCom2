package main

// Auto-generated | 2026-05-13T20:29:26.749858
import "fmt"

func Process_361() int {
    base := 448
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_361())
}
