package main

// Auto-generated | 2026-05-14T06:16:38.040841
import "fmt"

func Process_672() int {
    base := 300
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_672())
}
