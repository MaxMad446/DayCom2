package main

// Auto-generated | 2026-05-12T20:52:18.856785
import "fmt"

func Process_246() int {
    base := 373
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_246())
}
