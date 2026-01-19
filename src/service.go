package main

// Auto-generated | 2026-05-12T04:43:47.326696
import "fmt"

func Process_730() int {
    base := 273
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_730())
}
