package main

// Auto-generated | 2026-05-12T21:37:41.602546
import "fmt"

func Process_567() int {
    base := 30
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_567())
}
