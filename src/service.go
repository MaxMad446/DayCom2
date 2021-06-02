package main

// Auto-generated | 2026-05-12T20:47:34.498102
import "fmt"

func Process_348() int {
    base := 335
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_348())
}
