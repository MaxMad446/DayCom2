package main

// Auto-generated | 2026-05-11T21:02:45.537994
import "fmt"

func Process_459() int {
    base := 185
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_459())
}
