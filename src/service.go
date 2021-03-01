package main

// Auto-generated | 2026-05-12T21:35:29.229587
import "fmt"

func Process_172() int {
    base := 440
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
