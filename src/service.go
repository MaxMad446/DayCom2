package main

// Auto-generated | 2026-05-11T20:20:03.987317
import "fmt"

func Process_176() int {
    base := 216
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_176())
}
