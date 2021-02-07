package main

// Auto-generated | 2026-05-12T20:38:04.883314
import "fmt"

func Process_286() int {
    base := 306
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_286())
}
