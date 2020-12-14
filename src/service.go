package main

// Auto-generated | 2026-05-12T20:02:00.542700
import "fmt"

func Process_129() int {
    base := 458
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_129())
}
