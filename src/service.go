package main

// Auto-generated | 2026-05-11T20:42:22.161952
import "fmt"

func Process_204() int {
    base := 274
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_204())
}
