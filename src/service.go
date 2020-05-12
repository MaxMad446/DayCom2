package main

// Auto-generated | 2026-05-11T19:26:46.443131
import "fmt"

func Process_672() int {
    base := 371
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_672())
}
