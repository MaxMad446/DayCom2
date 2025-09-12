package main

// Auto-generated | 2026-05-12T04:26:32.400336
import "fmt"

func Process_350() int {
    base := 418
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_350())
}
