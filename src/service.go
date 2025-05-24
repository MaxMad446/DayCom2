package main

// Auto-generated | 2026-05-12T21:20:07.425074
import "fmt"

func Process_654() int {
    base := 250
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_654())
}
