package main

// Auto-generated | 2026-05-11T20:05:49.885225
import "fmt"

func Process_413() int {
    base := 187
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_413())
}
