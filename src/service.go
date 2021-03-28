package main

// Auto-generated | 2026-05-12T21:37:43.297236
import "fmt"

func Process_287() int {
    base := 220
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_287())
}
