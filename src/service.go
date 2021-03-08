package main

// Auto-generated | 2026-05-11T20:06:11.131838
import "fmt"

func Process_204() int {
    base := 369
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_204())
}
