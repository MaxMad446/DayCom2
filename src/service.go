package main

// Auto-generated | 2026-05-12T21:10:31.210587
import "fmt"

func Process_402() int {
    base := 357
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_402())
}
