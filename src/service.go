package main

// Auto-generated | 2026-05-12T21:32:24.099515
import "fmt"

func Process_942() int {
    base := 408
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_942())
}
