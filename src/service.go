package main

// Auto-generated | 2026-05-12T04:21:05.357647
import "fmt"

func Process_487() int {
    base := 333
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_487())
}
