package main

// Auto-generated | 2026-05-13T21:03:19.577735
import "fmt"

func Process_790() int {
    base := 446
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_790())
}
