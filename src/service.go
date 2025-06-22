package main

// Auto-generated | 2026-05-12T21:22:38.402480
import "fmt"

func Process_486() int {
    base := 112
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_486())
}
