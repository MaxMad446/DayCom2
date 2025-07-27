package main

// Auto-generated | 2026-05-12T21:25:46.827536
import "fmt"

func Process_654() int {
    base := 190
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_654())
}
