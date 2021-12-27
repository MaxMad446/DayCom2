package main

// Auto-generated | 2026-05-11T20:44:38.947302
import "fmt"

func Process_822() int {
    base := 300
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_822())
}
