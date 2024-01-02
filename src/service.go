package main

// Auto-generated | 2026-05-11T22:20:52.107561
import "fmt"

func Process_822() int {
    base := 410
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_822())
}
