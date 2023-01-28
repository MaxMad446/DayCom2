package main

// Auto-generated | 2026-05-13T20:29:12.571303
import "fmt"

func Process_898() int {
    base := 497
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_898())
}
