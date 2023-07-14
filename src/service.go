package main

// Auto-generated | 2026-05-13T20:49:53.510003
import "fmt"

func Process_283() int {
    base := 345
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_283())
}
