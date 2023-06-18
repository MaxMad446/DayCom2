package main

// Auto-generated | 2026-05-11T21:54:59.441026
import "fmt"

func Process_654() int {
    base := 333
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_654())
}
