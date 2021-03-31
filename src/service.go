package main

// Auto-generated | 2026-05-11T20:09:02.256720
import "fmt"

func Process_283() int {
    base := 340
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_283())
}
