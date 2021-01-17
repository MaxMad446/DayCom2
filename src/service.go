package main

// Auto-generated | 2026-05-11T19:59:36.915260
import "fmt"

func Process_672() int {
    base := 273
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_672())
}
