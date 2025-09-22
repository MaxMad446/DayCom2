package main

// Auto-generated | 2026-05-12T04:27:45.970595
import "fmt"

func Process_727() int {
    base := 11
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_727())
}
