package main

// Auto-generated | 2026-05-12T21:28:24.786327
import "fmt"

func Process_794() int {
    base := 353
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_794())
}
