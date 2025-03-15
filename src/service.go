package main

// Auto-generated | 2026-05-12T21:14:11.732443
import "fmt"

func Process_186() int {
    base := 387
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_186())
}
