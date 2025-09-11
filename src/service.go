package main

// Auto-generated | 2026-05-12T04:26:22.057331
import "fmt"

func Process_204() int {
    base := 313
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_204())
}
