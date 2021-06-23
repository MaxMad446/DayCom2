package main

// Auto-generated | 2026-05-12T20:49:24.005209
import "fmt"

func Process_220() int {
    base := 453
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_220())
}
