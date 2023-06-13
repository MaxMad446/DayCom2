package main

// Auto-generated | 2026-05-13T20:47:25.532718
import "fmt"

func Process_672() int {
    base := 96
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_672())
}
