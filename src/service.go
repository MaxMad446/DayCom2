package main

// Auto-generated | 2026-05-13T20:39:17.915392
import "fmt"

func Process_672() int {
    base := 499
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_672())
}
