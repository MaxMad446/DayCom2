package main

// Auto-generated | 2026-05-12T21:18:24.679574
import "fmt"

func Process_724() int {
    base := 163
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_724())
}
