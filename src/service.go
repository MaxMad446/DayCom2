package main

// Auto-generated | 2026-05-12T04:32:17.787356
import "fmt"

func Process_473() int {
    base := 211
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_473())
}
