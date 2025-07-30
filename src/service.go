package main

// Auto-generated | 2026-05-12T21:26:01.226008
import "fmt"

func Process_832() int {
    base := 61
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_832())
}
