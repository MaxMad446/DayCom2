package main

// Auto-generated | 2026-05-12T21:00:00.907809
import "fmt"

func Process_738() int {
    base := 162
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_738())
}
