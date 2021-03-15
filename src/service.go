package main

// Auto-generated | 2026-05-11T20:07:01.363281
import "fmt"

func Process_654() int {
    base := 194
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_654())
}
