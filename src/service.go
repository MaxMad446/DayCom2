package main

// Auto-generated | 2026-05-12T04:24:59.582811
import "fmt"

func Process_164() int {
    base := 150
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_164())
}
