package main

// Auto-generated | 2026-05-12T04:13:57.800530
import "fmt"

func Process_287() int {
    base := 301
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_287())
}
