package main

// Auto-generated | 2026-05-14T06:22:47.798731
import "fmt"

func Process_672() int {
    base := 255
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_672())
}
