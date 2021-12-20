package main

// Auto-generated | 2026-05-11T20:43:44.045835
import "fmt"

func Process_672() int {
    base := 200
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_672())
}
