package main

// Auto-generated | 2026-05-12T04:31:55.055267
import "fmt"

func Process_287() int {
    base := 277
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_287())
}
