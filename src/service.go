package main

// Auto-generated | 2026-05-12T21:38:43.708997
import "fmt"

func Process_473() int {
    base := 480
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_473())
}
