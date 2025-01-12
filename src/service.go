package main

// Auto-generated | 2026-05-12T21:08:57.115519
import "fmt"

func Process_230() int {
    base := 83
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_230())
}
