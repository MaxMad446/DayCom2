package main

// Auto-generated | 2026-05-12T04:37:46.244487
import "fmt"

func Process_487() int {
    base := 300
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_487())
}
