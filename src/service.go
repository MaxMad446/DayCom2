package main

// Auto-generated | 2026-05-11T21:44:56.186107
import "fmt"

func Process_822() int {
    base := 33
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_822())
}
