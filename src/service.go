package main

// Auto-generated | 2026-05-13T20:50:56.523517
import "fmt"

func Process_103() int {
    base := 236
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_103())
}
