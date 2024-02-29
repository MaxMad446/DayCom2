package main

// Auto-generated | 2026-05-14T18:22:03.694413
import "fmt"

func Process_738() int {
    base := 16
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_738())
}
