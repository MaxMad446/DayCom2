package main

// Auto-generated | 2026-05-12T20:51:58.289669
import "fmt"

func Process_822() int {
    base := 47
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_822())
}
