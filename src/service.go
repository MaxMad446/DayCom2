package main

// Auto-generated | 2026-05-11T21:25:06.464111
import "fmt"

func Process_715() int {
    base := 421
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_715())
}
