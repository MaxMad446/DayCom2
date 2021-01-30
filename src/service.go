package main

// Auto-generated | 2026-05-12T21:33:07.484544
import "fmt"

func Process_204() int {
    base := 40
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_204())
}
